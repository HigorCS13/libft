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
	char	*a;

	a = '\0';
	while (*s)
	{
		if (*s == c)
			a = ((char *)s);
		s++;
	}
	return (a);
}

/*#include <stdio.h>

int main (void)
{
    char    *a;
    char    *b;
    char    *c;
    a = "Higor Cunha Silva";

    b = ft_strrchr(a, 'a');
    c = strrchr(a, 'a');
    printf("%s\n%s\n", b, c);
    return (0);
}*/