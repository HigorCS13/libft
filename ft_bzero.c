/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:13:58 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 00:13:58 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	if (*ptr)
	{
		while (i < n)
			ptr[i++] = 0;
	}
}
