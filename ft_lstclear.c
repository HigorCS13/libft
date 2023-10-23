/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:29:32 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/11 21:29:32 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
the ft_lstclear() takes a pointer to a pointer struct, and if he's not NULL, 
the function made a del() for each node existent, adding NULL in each of then.
Finally, after all nodes have been deleted, the pointer to the pointer (lst) 
is set to NULL to indicate that the list is empty.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (!*lst || !lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	lst = NULL;
}
