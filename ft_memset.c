/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:15:52 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 00:15:52 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
		ptr[i++] = (unsigned char)c;
	return (s);
}

/*#include <stdio.h>

int main() 
{
    int arr[5];
	size_t num_elements = sizeof(arr) / sizeof(arr[0]);
    
	ft_memset(arr, 6, num_elements * sizeof(int));
    for (size_t i = 0; i < num_elements; i++)
	{
        printf("%c ", arr[i]);
        printf("- %d\n", arr[i]);
    }
    return 0;
}*/