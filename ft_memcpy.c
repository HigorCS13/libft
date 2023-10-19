/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:35:11 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/02 22:35:11 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_dest = dest;
	ptr_src = src;
	if (!ptr_dest && !ptr_src)
		return (NULL);
	while (n--)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    ft_memcpy(destination, source, strlen(source) + 1);
    destination[strlen(source)] = '\0';
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    return (0);
}*/