/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:23:12 by sara              #+#    #+#             */
/*   Updated: 2022/11/16 23:44:37 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*LIBRARY
#include <string.h>
DESCRIPTION
strlcat() appends string src to the end of dst.  It will append at most 
dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless 
dstsize is 0 or the original dst string was longer than dstsize (in practice 
this should not happen as it means that either dstsize is incorrect or that 
dst is not a proper string).
PARAMETERS
#1. The destiny string in which to concatenate.
#2. The source string to concatenate.
#3. The total number of bytes in destiny.
RETURN VALUES
the strlcat() function returns the length of the string it tried to create.*/

#include "libft.h"

size_t	ft_strlcat(char *dest, char *source, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_dest;
	size_t	size_source;

	size_dest = ft_strlen(dest);
	size_source = ft_strlen(source);
	i = 0;
	j = size_dest;
	if (size_dest < size - 1 && size > 0)
	{
		while (source[i] && size_dest + i < size - 1)
		{
			dest[j] = source[i];
			j++;
			i++;
		}
		dest[j] = 0;
	}
	if (size_dest >= size)
		size_dest = size;
	return (size_dest + size_source);
}

/*#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    size_t r;
    size_t size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %ld\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}*/