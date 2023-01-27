/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:42:18 by sara              #+#    #+#             */
/*   Updated: 2022/11/24 00:15:28 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
Allocates (with malloc) and returns a string representing the integer 
received as an argument. Negative numbers must be handled.
PARAMETERS
#1. the integer to convert.
RETURN VALUES
The string representing the integer. NULL if the allocation fails.*/

#include "libft.h"
#include <limits.h>

static int	ft_size(int n)

{
	int	size;

	size = 0;
	if (n > 0)
		size = 0;
	else
		size = 1;
	return (size);
}

static int	ft_signal(int n)
{
	int	signal;

	signal = 0;
	if (n < 0)
		signal = -1;
	else
		signal = 1;
	return (signal);
}

char	*ft_itoa(int n)
{
	char				*str;
	unsigned long int	nbr;
	size_t				size;

	size = ft_size(n);
	nbr = (unsigned long int)n * ft_signal(n);
	while (n)
	{
		n = n / 10;
		size++;
	}
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	*(str + size--) = '\0'; //ao começar do fim o ultimo index é sempre null
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + 48;
		nbr = nbr / 10; //se trocarmos isto para cima irá colocar um zero antes do resultado pois temos de decrementar primeiro
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = 48;
	else if (size == 0 && str[1] != '\0') //se a primeira posição não for null mas o size for 0 significa que o numero é negativo e tem um menos
		*(str + size) = '-';
	return (str);
}

/*int main()
{
	int	n;
	
	n = INT_MIN;
	
	printf("Testing -> %s\n", ft_itoa(n));
}*/