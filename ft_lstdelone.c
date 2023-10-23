/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:55:49 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/09 22:55:49 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
the ft_lstdelone() takes a pointer struct, and if he's not NULL, the function 
made a del() for each node existent, adding NULL in each of then.
Finally, after the node have be deleted, the pointer (lst) is freed.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
