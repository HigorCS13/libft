/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 00:17:09 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/19 10:14:15 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char) s1[i] != '\0' || (unsigned char) s2[i] != '\0') 
			&& i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((((char)s1[i]) - ((unsigned char) s2[i])));
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char *a = "test\200";
	char *b = "test\0";
	unsigned int c = 6;
	
	printf("%d\n", ft_strncmp(a, b, c));
	printf("%d\n", strncmp(a, b, c));
}
*/