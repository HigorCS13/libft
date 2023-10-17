/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:17:25 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 00:17:25 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*a;

	a = s;
	while (*a)
		a++;
	while (*s != *a)
	{
		if (*a == (char)c)
			return ((char *)a);
		a--;
	}
	if (*a == (char)c)
		return ((char *)a);
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*#include <stdio.h>

int main (void)
{
    char    *a;
    char    *b;
    char    *c;
    a = "Higor Cunha Silva";

    b = ft_strrchr(a, 'u');
    c = strrchr(a, 'a');
    printf("%s\n%s\n", b, c);
    return (0);
}*/