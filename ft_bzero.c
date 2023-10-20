/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:13:58 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 00:13:58 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The bzero() function erases the data in the n bytes of the memory starting at 
the location pointed to by s, by writing zeros (bytes containing '\0') to that 
area.

	while (n-- > 0) // a method for utilize less variables
		*ptr++ = 0; // a pointer walk method
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *) s;
	while (n-- > 0)
		*ptr++ = 0;
}

/*#include <stdio.h>

void printArray(const char *array, size_t size)
{
    for (size_t i = 0; i < size; ++i)
        printf("%d ", array[i]);
    printf("\n");
}
int main()
{
    char array[10];
    printf("Array antes de bzero: ");
    printArray(array, sizeof(array) / sizeof(array[0]));
    size_t size = sizeof(array);
    bzero(array, size);
    printf("Array depois de bzero: ");
    printArray(array, sizeof(array) / sizeof(array[0]));
    return 0;
}*/