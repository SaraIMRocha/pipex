/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:37 by sara              #+#    #+#             */
/*   Updated: 2022/11/24 17:50:29 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function searches for the first occurrence of the character c 
(an unsigned char) in the first n bytes 
of the string pointed to, by the argument str.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == ((unsigned char)c))
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	printf("Test de ft_memchr : \n");
	if (memchr("source", 'r', 2) == ft_memchr("source", 'r', 2) && 
	!strcmp(memchr("source", 'r', 5), ft_memchr("source", 'r', 5)))
		printf("OK\n");
	else
		printf("Failed.\n");
}*/