/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:16:57 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 00:16:57 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

/*#include <stdio.h>

int	main(int ac, char **av)
{
	//if (ac > 1)
	//	printf("%d",ft_strlen(av[1]));
	printf("%d", ft_strlen("Higor"));
	return (0);
}*/
