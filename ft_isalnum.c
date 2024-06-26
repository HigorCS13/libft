/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:14:12 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 00:14:12 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
checks for an alphanumeric chars; it is equivalent to (isalpha(c) || isdigit(c))
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
