/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:44 by sara              #+#    #+#             */
/*   Updated: 2022/11/24 17:45:51 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function copies n characters from memory area src to memory area dst

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == src || n == 0)
		return (dst);
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int	main()

{
	char str[] = "Ola peasants";
	memcpy(str, str + 3, 3);
	printf("%s\n", str);
	ft_memcpy(str, str + 3, 3);
	printf("%s\n", str);
	return(0);
}*/