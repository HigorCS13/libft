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

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	//if (!ft_isascii(c))
	//	return ((char *)s);
	len = ft_strlen(s);
	while (i <= len)
	{
		if (*s == c)
			return ((char *)s);
		s++;
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int main (void)
{
    char    *a;
    char    *b;
    char    *c;
    a = "tripouille";

    b = ft_strchr(a, 't' + 256);
    c = strchr(a, 't' + 256);
    printf("%s\n%s\n", b, c);
    return (0);
}*/