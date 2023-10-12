/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:39:31 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/05 20:20:54 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	char	*name;
	char	*s_name;

	name = "Higor Cunha Silva";
	s_name = ft_substr(name, 6, strlen(name));
	printf("%s", s_name);
	return (0);
}*/