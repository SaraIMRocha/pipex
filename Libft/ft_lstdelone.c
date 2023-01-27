/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:14:16 by sara              #+#    #+#             */
/*   Updated: 2022/11/24 04:50:21 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
Takes as a parameter an element and frees the memory of the element’s 
content using the function ’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.
PARAMETERS
#1. The element to free.
#2. The address of the function used to delete the content.
RETURN VALUES
-
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst -> content);
	free(lst);
}
