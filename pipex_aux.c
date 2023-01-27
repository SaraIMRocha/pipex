/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_aux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:50:53 by sara              #+#    #+#             */
/*   Updated: 2023/01/27 17:48:24 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "pipex.h"

int	error_handler(int err, char *s1, char *s2, char *s3)
{
	ft_putstr_fd("pipex: ", 2);
	ft_putstr_fd(str1, 2);
	ft_putstr_fd(str2, 2);
	ft_putendl_fd(str3, 2);
	return (err);
}