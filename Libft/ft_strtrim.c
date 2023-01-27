/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:37:14 by sara              #+#    #+#             */
/*   Updated: 2022/11/23 23:07:06 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
specified in ’set’ removed from the beginning and the end of the string.
PARAMETERS
#1. The string to be trimmed.
#2. The reference set of characters to trim.
RETURN VALUES
The trimmed string. NULL if the allocation fails.*/

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	i;

	if (!s || !set)
		return (0);
	while (*s && ft_strchr(set, *s))
		s++;
	i = ft_strlen(s);
	while (i && ft_strchr(set, s[i]))
		i--;
	return (ft_substr(s, 0, i + 1));
}

/*int main(void)
{
	printf("\nTeste de ft_strtrim :\n");
	printf("'Im am heLPfull so I HAve My MAINS' : %s\n", ft_strtrim("so", "IS"));
}*/