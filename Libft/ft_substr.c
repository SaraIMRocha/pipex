/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:37:10 by sara              #+#    #+#             */
/*   Updated: 2022/11/25 00:57:17 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
PARAMETERS
#1. The string from which to create the substring.
#2. The start index of the substring in the string ’s’.
#3. The maximum length of the substring.
RETURN VALUES
The substring. NULL if the allocation fails.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	i;
	size_t	j;
	char	*sbstr;

	if (!s)
		return (0);
	i = start;
	j = 0;
	if (len > ft_strlen(s))
		len = ft_strlen(s) + 1;
	sbstr = (char *)malloc(len + 1);
	if (!sbstr)
		return (0);
	while (i < ft_strlen(s) && j < len)
		sbstr[j++] = s[i++];
	sbstr[j] = '\0';
	return (sbstr);
}

/*int main()
{
    char src[] = "testing my ft_substr luv";
    printf(":%s:\n", ft_substr(src, 5, 5));
}*/