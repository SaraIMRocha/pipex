/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:43:45 by sara              #+#    #+#             */
/*   Updated: 2022/11/22 17:40:57 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
The calloc() function contiguously allocates enough space for count objects 
that are size bytes of memory each and returns a pointer to the allocated 
memory.  The allocated memory is filled with bytes of value zero.
#1. The count of objects to allocate.
#2. The size of bytes in each object.
RETURN VALUES
If successful, calloc() function returns a pointer to allocated memory. 
If there is an error, they return a NULL pointer.*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	ft_memset(ptr, '\0', (count * size));
	return (ptr);
}

/*int main () 
{
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d\n",a[i]);
   }
   free( a );
   
   return(0);
}*/