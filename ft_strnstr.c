/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:13:04 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 00:13:04 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	z;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		z = 0;
		while (big[i + z] != '\0' && big[i + z] == little[z] && i + z < len)
		{
			if (little[z + 1] == '\0')
				return ((char *)&big[i]);
			z++;
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int   main()
{
        char    str [] = "You have to find the word";
        char    find[] = "the";
        printf("%s", ft_strnstr(str, find, 25));
}*/