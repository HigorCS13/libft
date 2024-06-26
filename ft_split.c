/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:30:08 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/21 00:31:11 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_free(char **array, int j)
{
	while (j-- > 0)
		free(array[j]);
	free(array);
	return (0);
}

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	splitstr(char const *s, char **new, char c)
{
	size_t	i;
	size_t	j;
	size_t	v;

	i = 0;
	j = 0;
	v = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] != c)
		{
			while (s[i + j] != c && s[i + j])
				j++;
			new[v] = ft_substr(s, i, j);
			if (!new[v])
				return (ft_free(new, v));
			v++;
			i = i + j;
		}
		else
			i++;
	}
	new[v] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	array = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!array)
		return (NULL);
	if (splitstr(s, array, c) == 0)
		return (NULL);
	return (array);
}

/*#include <stdio.h>

int	main()
{
    char str[] = "      split       this for   me  !       ";
    char **arr;

    arr = ft_split(str, ' ');
    int i = 0;
    while (arr[i] != NULL)
    {
        printf("[%s]\n", arr[i]);
        i++;
    }
    return (0);
}*/