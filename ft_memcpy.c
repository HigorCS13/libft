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
	size_t			i;
	unsigned char	*ptr_dest;
	const char		*ptr_src;

	i = 0;
	ptr_dest = dest;
	ptr_src = (const char *)src;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
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