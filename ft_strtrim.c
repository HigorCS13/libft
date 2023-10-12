/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:33:23 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/09 13:31:54 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (c == set[i++])
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_isset(s1[i], set))
		i++;
	if (i == len)
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (ft_isset(s1[j], set))
		j--;
	j = (j + 1) - i;
	str = ft_substr(s1, i, j);
	return (str);
}

/*#include <stdio.h>

int   main()
{
        char    str [] = "ABC1234ABC567ABC";
        char    find[] = "ABC";
        printf("%s", ft_strtrim(str, find));
}*/