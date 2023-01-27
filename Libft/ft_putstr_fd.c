/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:40:53 by sara              #+#    #+#             */
/*   Updated: 2022/11/15 16:34:27 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
Outputs the string ’s’ to the given file descriptor.
PARAMETERS
#1. The string to output.
#2. The file descriptor on which to write.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)

{
	int	i;

	i = 0;
	if (s[i] != '\0')
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}
