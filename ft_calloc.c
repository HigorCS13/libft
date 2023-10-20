/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:38:11 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 09:38:11 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The calloc() function allocates memory for an array of nmemb elements of size 
bytes each and returns a pointer to the allocated memory.
The memory is set to zero.
If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer 
value that can later be successfully passed to free().
If the multiplication of nmemb and size would result in integer overflow, then 
calloc() returns an error.

The malloc() and calloc() functions return a pointer to the allocated memory, 
which is suitably aligned for any built-in type. On error, these functions 
return NULL.
NULL may also be returned by a successful call to malloc() with a size of zero, 
or by a successful call to calloc() with nmemb or size equal to zero.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*dest;
	size_t			i;

	i = 0;
	dest = malloc(nmemb * size);
	if (dest == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int main()
{
	size_t num_elements = 5;
	size_t element_size = sizeof(int);

    int *array = (int *)ft_calloc(num_elements, element_size);
	if (array == NULL)
	{
		printf("A alocação de memória falhou.\n");
		return (1);
	}
    printf("Memória alocada e inicializada com sucesso:\n");
    for (size_t i = 0; i < num_elements; ++i)
		printf("%d ", array[i]);
	free(array);
	return (0);
}*/