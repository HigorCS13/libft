/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:55:45 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/02 22:55:45 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (i < n)
	{
		if (*a > *b)
			return (1);
		else if (*a < *b)
			return (-1);
		i++;
		a++;
		b++;
	}
	return (0);
}

/*#include <stdio.h>

int main() 
{
    unsigned char array1[] = {0x01, 0x02, 0x03, 0x04, 0x05};
    unsigned char array2[] = {0x01, 0x02, 0x03, 0x03, 0x05};

    int result_1 = memcmp(array1, array2, sizeof(array1));
    int result_2 = ft_memcmp(array1, array2, sizeof(array1));

	printf("memcmp: %d\n", result_1);
    if (result_1 == 0) {
        printf("Os arrays são iguais.\n");
    } else if (result_1 < 0) {
        printf("O primeiro array é menor que o segundo.\n");
    } else {
        printf("O primeiro array é maior que o segundo.\n");
    }

	printf("ft_memcmp: %d\n", result_2);
    if (result_2 == 0) {
        printf("Os arrays são iguais.\n");
    } else if (result_2 < 0) {
        printf("O primeiro array é menor que o segundo.\n");
    } else {
        printf("O primeiro array é maior que o segundo.\n");
    }

    return 0;
}*/