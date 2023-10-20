/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:14:37 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 00:14:37 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
checks whether c is a 7-bit unsigned char value that fits into the ASCII 
character set.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
