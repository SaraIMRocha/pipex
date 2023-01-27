/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:27:12 by sara              #+#    #+#             */
/*   Updated: 2022/11/25 02:02:09 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns an array of strings obtained by 
*	splitting ’s’ using the character ’c’ as a delimiter. The array must be
*	ended by a NULL pointer.
*	PARAMETERS
*	#1. The string to be split.
*	#2. The delimiter character.
*	RETURN VALUES
*	The array of new strings resulting from the split. 
*	NULL if the allocation fails.
*/

#include "libft.h"

static int	contador(char const *s, char c)
{
	size_t		i;
	size_t		trigger;

	i = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		if (*s == c)
			trigger = 0;
		s++;
	}
	return (i);
}

static char	*duplicador(char const *str, size_t strt, size_t end)
{
	char		*palavra;
	size_t		i;

	i = 0;
	palavra = malloc(((end - strt) + 1) * sizeof(char));
	if (!palavra)
		return (0);
	while (strt < end)
		palavra[i++] = str[strt++];
	palavra[i] = '\0';
	return (palavra);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	size_t		i;
	size_t		f;
	size_t		index;

	f = 0;
	i = 0;
	split = malloc((contador(s, c) + 1) * sizeof(char *));
	index = 0;
	if (!s || !split)
		return (NULL);
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		index = i;
		while (s[i] != c && s[i])
			i++;
		if (s[i] || i > index)
			split[f++] = duplicador(s, index, i);
	}
	split[f] = NULL;
	return (split);
}
