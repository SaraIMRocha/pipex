/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:31 by sara              #+#    #+#             */
/*   Updated: 2022/11/15 18:55:16 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*#include<stdio.h>
#include<ctype.h>
int main()
{
  char val= '\t';
  if(ft_isprint(val))
    printf("This is printable \n");
   else
    printf("This is not printable \n");
  return 0;
}*/