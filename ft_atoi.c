/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:13:47 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/08 18:01:52 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (sign * res);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	res;

	res = 0;
	if (ac < 1 && ac >= 2)
		return (0);
	res = ft_atoi(av[1]);
	printf("%d\n", res);
	res = atoi(av[1]);
	printf("%d\n", res);
	return (0);
}
*/