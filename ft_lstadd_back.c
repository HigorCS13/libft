/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:11:35 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/09 22:11:35 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_lstadd_back made an incrementation of a pointed structure in th end of 
another pointer of a pointer structure.

If any of the nodes are NULL, the function returns without create new nodes.
If the reciver structure is NULL, the function returns the filled node with the 
new one.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
