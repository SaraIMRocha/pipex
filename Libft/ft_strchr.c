/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:56 by sara              #+#    #+#             */
/*   Updated: 2022/11/23 22:59:38 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
*	The strchr() function locates the first occurrence of c (converted to a 
*	char) in the string pointed to by s. The terminating null character is 
*	considered to be part of the string; therefore if c is `\0', the functions 
*	locate the terminating `\0'.
*	PARAMETERS
*	#1. The string in which to checks for the occurence of c.
*	#2. The character to check the occurence of.
*	RETURN VALUES
*	The function strchr() returns a pointer to the located 
*	character, or NULL if the character does not appear in the string.*/

/*char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	else
		return (0);
}*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	else
		return (0);
}

/*int	main(void)
{
	char *str = "parece quefuncimina";
	printf("\nTa igual ta gud:\n");
	printf("%p : %p\n", strchr(str, ' '), ft_strchr(str, ' '));
	printf("%p : %p\n", strchr(str, '\0'), ft_strchr(str, '\0'));
	printf("%p : %p\n", strchr(str, 's'), ft_strchr(str, 's'));
	printf("%p : %p\n", strchr(str, 'u'), ft_strchr(str, 'u'));
}*/