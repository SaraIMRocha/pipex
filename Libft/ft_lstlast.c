/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:14:10 by sara              #+#    #+#             */
/*   Updated: 2022/11/24 04:58:52 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
-->**Returns the last element of the list.**<--
PARAMETERS
#1. The beginning of the list.
RETURN VALUES
Last element of the list.*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

//se criar um data type t_list para conter o lst -> next dá timeout
/*int	main()
{
	int		tab[20];
	t_list	*begin;
	*tab = 0;
	begin = ft_lstnew(tab);
	printf("\nTest de ft_lstlast :\n");
	if (*((int*)(ft_lstlast(begin)->content)) == 0)
		printf("OK\n");
	else
		printf("Failed.\n");
}*/