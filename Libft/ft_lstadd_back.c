/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:14:13 by sara              #+#    #+#             */
/*   Updated: 2022/11/24 04:48:57 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
Adds the element ’new’ at the end of the list.
PARAMETERS
#1. The address of a pointer to the first link of a list.
#2. The address of a pointer to the element to be added to the list.
RETURN VALUES
-
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*add;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	add = ft_lstlast(*lst);
	add -> next = new;
}
