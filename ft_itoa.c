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

/*
The ft_itoa() function converts the int number to a string with the correct 
memory allocation, terminated by NULL, except that ft_itoa() does not detect 
malloc() errors.

Return the converted value.
*/

#include <limits.h>
#include "libft.h"

static	size_t	num_len(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
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
#include <limits.h>

int main()
{
	int	n;

	n = 0;
	printf("%s", ft_itoa(n));
	return (0);
}*/