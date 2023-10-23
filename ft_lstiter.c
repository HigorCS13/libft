/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:57:04 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/11 21:57:04 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
the ft_lstitter() made an iteration on the pointer (lst), using the (f) 
function, if the node isn't NULL.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
