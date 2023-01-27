/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:23:05 by sara              #+#    #+#             */
/*   Updated: 2022/11/22 17:48:53 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARY
#include <string.h>
DESCRIPTION
The strdup() function allocates sufficient memory for a copy of the string 
s1, does the copy, and returns a pointer to it.
PARAMETERS
#1. The string to duplicate.
RETURN VALUES
The strdup() function returns the pointer to the copy of s1.*/

//https://www.youtube.com/watch?v=d1gGryidv18

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	s2 = malloc(sizeof(char) * ft_strlen(s1) + 1);
	i = 0;
	if (!s2 || !s1)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int		main(void)
{
	char	*result;

	result = ft_strdup("just testing ma friend");
	printf("%s\n", result);
	return (0);
}*/

// C program to demonstrate strdup()
/*#include<stdio.h>
#include<string.h>

int main()
{
	char source[] = "Just testing ma friend";

	// A copy of source is created dynamically
	// and pointer to copy is returned.
	char* target = ft_strdup(source);

	printf("%s\n", target);
	return (0);
}*/
