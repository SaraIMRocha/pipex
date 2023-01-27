/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:14:19 by sara              #+#    #+#             */
/*   Updated: 2022/11/24 04:46:56 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
Deletes and frees the given element and every successor of that element, 
using the function ’del’ and free(3). Finally, the pointer to the list must 
be set to NULL.
PARAMETERS
#1. The adress of a pointer to an element.
#2. The adress of the function used to delete the content of the element.
RETURN VALUES
----
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*f)(void *))

{
	t_list	*clear;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		clear = (*lst)->next;
		ft_lstdelone(*lst, f);
		*lst = clear;
	}
	lst = NULL;
}
