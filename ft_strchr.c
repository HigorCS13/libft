/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:16:02 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 00:16:02 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*#include <stdio.h>

int main (void)
{
    char    *a;
    char    *b;
    char    *c;
    a = "Higor Cunha Silva";

    b = ft_strchr(a, 'u');
    c = strchr(a, 'u');
    printf("%s\n%s\n", b, c);
    return (0);
}*/