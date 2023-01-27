/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 19:16:01 by sara              #+#    #+#             */
/*   Updated: 2022/11/14 16:25:16 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

#include "libft.h"

int	ft_atoi(const char *str)

{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (((str[i] && str[i] == 32) || (str[i] > 8 && str[i] < 14)))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	res *= sign;
	return (res);
}

/*
int max = 2147483647
int min = -2147483648
*/

/*int	main(void)
{
	printf("%d\n", ft_atoi("-3251326"));
	printf("%d\n", atoi("-3251326"));
	//return (0);
}*/