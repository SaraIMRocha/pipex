/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:49 by sara              #+#    #+#             */
/*   Updated: 2022/11/25 00:43:03 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memset() function writes len bytes of value c (converted to an 
unsigned char) to the string b.
PARAMETERS
#1. The destiny pointer in which to write.
#2. The character to write.
#3. The number of bytes to write.
RETURN VALUES
The memset() function returns its first argument.*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)

{
	size_t			i;
	unsigned char	*dst;

	i = 0;
	dst = (unsigned char *) b;
	while (i < len)
	{
		dst[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*#include <stdio.h>
#include <string.h>

int main () 
{
   char str[50];

   strcpy(str,"Just testing migus");
   puts(str);

   ft_memset(str,'t',7);
   puts(str);
   
   return(0);
}*/