/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:14:27 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 00:14:27 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
checks for an alphabetic character; in the standard "C" locale, it is 
equivalent to (isupper(c) || islower(c)).
In some locales, there may be additional characters for which isalpha() is 
true—letters which are neither uppercase nor lowercase.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
