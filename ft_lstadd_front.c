/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:40:40 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/09 13:40:40 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_lstadd_front made an incrementation of a pointed structure in the first 
position of another pointer of a pointer structure, only if the structures 
exists.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		new->next = *lst;
		*lst = new;
	}
}
