/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:35:01 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/02 22:35:01 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == *ptr)
		{
			return ((void *)ptr);
		}
		ptr++;
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int main() {
    const char *str = "Hello, World!";
    char ch = 'a';
    size_t n = strlen(str);

    void *result_1 = memchr(str, ch, n);
    void *result_2 = ft_memchr(str, ch, n);

    if (result_1 != NULL) {
        printf("'%c' found at position: %ld\n", ch, (char *)result_1 - str + 1);
    } else {
        printf("'%c' not found at the string.\n", ch);
    }

    if (result_2 != NULL) {
        printf("'%c' found at position: %ld\n", ch, (char *)result_2 - str + 1);
    } else {
        printf("'%c' not found at the string.\n", ch);
    }

    return (0);
}*/