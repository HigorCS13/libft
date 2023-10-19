/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:30:08 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/19 16:41:52 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static size_t	ft_wordln(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_wordcpy(char const *s, char c)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc(sizeof(char *) * (ft_wordln(s, c) + 1));
	if (!word)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

/*static void	ft_free_array(char **array)
{
	size_t	i;

	i = 0;
	if (!array)
		return ;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}*/
			/*if (array[j] == NULL) // below to the filled array[j]
			{
				ft_free_array (array);
				return (NULL);
			}*/

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	array = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			array[j] = ft_wordcpy(&s[i], c);
			j++;
			i += ft_wordln(&s[i], c);
		}
	}
	array[j] = 0;
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