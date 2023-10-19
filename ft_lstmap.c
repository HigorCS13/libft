/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:21:32 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/11 22:21:32 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_nd;
	void	*content_r;

	new_lst = NULL;
	while (lst)
	{
		content_r = f(lst->content);
		new_nd = ft_lstnew(content_r);
		if (!new_nd)
		{
			ft_lstclear(&new_lst, del);
			del(content_r);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_nd);
		lst = lst->next;
	}
	return (new_lst);
}
