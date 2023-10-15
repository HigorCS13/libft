/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:08:41 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/05 09:08:41 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strpcpy(char *dest, const char *src_1, const char *src_2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j == 0)
	{
		while (src_1[j])
		{
			dest[i] = src_1[j];
			i++;
			j++;
		}
		j = 0;
		while (src_2[j])
		{
			dest[i] = src_2[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	total_ln;

	total_ln = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc((total_ln + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strpcpy(dest, s1, s2);
	return (dest);
}

/*#include <stdio.h>

int   main()
{
        char    str [] = "You have to ";
        char    find[] = "find the word";
        printf("%s", ft_strjoin(str, find));
		return (0);
}*/