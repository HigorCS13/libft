/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:57:48 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/09 21:57:48 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
the ft_lstlast() append the node on the last position of the struct.
If the node is NULL, return NULL.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
