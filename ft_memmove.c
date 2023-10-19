/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:15:27 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 00:15:27 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptr_dest;
	const char	*ptr_src;

	i = -1;
	ptr_dest = dest;
	ptr_src = src;
	if (!ptr_dest && !ptr_src)
		return (NULL);
	if (ptr_dest < ptr_src && ptr_dest + n > ptr_src)
	{
		while (++i < n)
			ptr_dest[i] = ptr_src[i];
	}
	else
	{
		i = n + 1;
		while (--i > 0)
			ptr_dest[i - 1] = ptr_src[i - 1];
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
	char *ptr;
    ptr = ft_memmove(str + 7, str, 5); // Copy "World" to overlap "Hello"
    printf("%s\n", str); // Output: "Hello, World!"
	printf("%s", ptr);
    return 0;
}*/