/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:16:47 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/05 14:12:41 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	x;

	len = 0;
	x = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size != 0)
	{
		while (x < size - 1 && src[x] != '\0')
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (len);
}

/*#include <stdio.h>

int main()
{       
	char a[] = "123456789";
	char b[7];
	unsigned int	ft_ex;
	unsigned int size;
	
	size = 5;

	ft_ex = ft_strlcpy(b, a, size);
	printf("%s", b);
	printf("\n%d", ft_ex);

}*/
