/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:22:28 by sara              #+#    #+#             */
/*   Updated: 2022/11/13 18:54:51 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*#include<stdio.h>
#include<ctype.h>
int main()
{
  char val= '7';
  if(ft_isdigit(val))
    printf("This is digit \n");
   else
    printf("This is not digit \n");
  return 0;
}*/