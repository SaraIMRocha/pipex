/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:14:04 by sara              #+#    #+#             */
/*   Updated: 2022/11/24 04:50:55 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
Adds the element ’new’ at the beginning of the list.
PARAMETERS
#1. The address of a pointer to the first link of a list.
#2. The address of a pointer to the element to be added to the list.
RETURN VALUES
-
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)

{
	if (!lst || !new)
		return ;
	if (*lst != NULL)
		new -> next = *lst;
	*lst = new;
}
