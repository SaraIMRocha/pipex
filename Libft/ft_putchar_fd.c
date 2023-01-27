/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:40:32 by sara              #+#    #+#             */
/*   Updated: 2022/11/15 16:34:05 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
Outputs the character ’c’ to the given file descriptor.
PARAMETERS
#1. The character to output.
#2. The file descriptor on which to write.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)

{
	write(fd, &c, 1);
}
