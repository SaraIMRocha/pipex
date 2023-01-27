/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:47 by sara              #+#    #+#             */
/*   Updated: 2022/11/24 17:47:36 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARY
#include <string.h>
DESCRIPTION
The memmove() function copies len bytes from string src to string dst.  
The two strings may overlap; the copy is always done in a nondestructive 
manner.
PARAMETERS
#1. The destiny pointer in which to copy.
#2. The source pointer to copy.
#3. The number of bytes to copy the source string.
RETURN VALUES
The memmove() function returns the original value of dst.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	char	*s;
	char	*d;

	s = (char *)src;
	d = dst;
	if (d > s)
		while (len--)
			d[len] = s[len];
	else
		ft_memcpy(d, s, len);
	return (dst);
}
