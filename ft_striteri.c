/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicunha- <hicunha-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:25:13 by hicunha-          #+#    #+#             */
/*   Updated: 2023/10/07 11:25:13 by hicunha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void example_function(unsigned int index, char *c)
{
	*c = *c + 1;
}

int main()
{
	char str[] = "hello";
	
	printf("Original string: %s\n", str);
	ft_striteri(str, example_function);
	printf("Modified string: %s\n", str);

	return 0;
}*/