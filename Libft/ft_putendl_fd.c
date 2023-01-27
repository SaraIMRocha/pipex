/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 00:27:09 by sara              #+#    #+#             */
/*   Updated: 2022/11/18 01:06:24 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*/*
DESCRIPTION
Outputs the integer ’n’ to the given file descriptor.
PARAMETERS
#1. The string to output.
#2. The file descriptor on which to write.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
