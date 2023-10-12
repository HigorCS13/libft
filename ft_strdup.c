/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:16:18 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/04 00:16:18 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = (char *) malloc (ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	*c;

	c = "Higor";
	printf("%s", ft_strdup(c));
}*/