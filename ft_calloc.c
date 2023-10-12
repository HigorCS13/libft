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

#include <stdlib.h>
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
    
    if (array == NULL) {
        printf("A alocação de memória falhou.\n");
        return 1;
    }

    printf("Memória alocada e inicializada com sucesso:\n");
    for (size_t i = 0; i < num_elements; ++i) {
        printf("%d ", array[i]);
    }

    free(array);
    return (0);
}*/