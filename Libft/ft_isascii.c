/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:26 by sara              #+#    #+#             */
/*   Updated: 2022/11/15 16:59:57 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*#include<stdio.h>
#include<ctype.h>
int main()
{
  char val= 'd';
  if(ft_isascii(val))
    printf("This is ascii character \n");
   else
    printf("This is not ascii character \n");
  return 0;
}*/