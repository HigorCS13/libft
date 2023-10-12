/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 09:21:59 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/07 09:21:59 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*result;

	len = 0;
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[len] != '\0')
		len++;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

/*#include <stdio.h>

char custom_callback(unsigned int index, char c)
{
    return ft_toupper(c);
}

int main(void)
{
    char *str = "hello";

    printf("%s\n", str);
    char *result = ft_strmapi(str, custom_callback);
    printf("%s\n", result);
    free(result);
 	return	(0);
}*/