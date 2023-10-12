/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:46:02 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/06 13:46:02 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static	size_t	num_len(long int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*num_str(size_t len, int n, char *num)
{
	size_t	j;

	j = 0;
	num[len] = '\0';
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
		j = 1;
	}
	while (len > j)
	{
		len--;
		num[len] = n % 10 + 48;
		n = n / 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	i;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	i = num_len(n);
	num = malloc(sizeof(char) * (i + 1));
	if (!num)
		return (NULL);
	num_str(i, n, num);
	return (num);
}

/*#include <stdio.h>

int main()
{
	int	n;

	n = -2147483647;
	printf("%s", ft_itoa(n));
	return (0);
}*/