/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:00:48 by yslami            #+#    #+#             */
/*   Updated: 2024/10/21 23:51:03 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == 0)
	{
		return ((char *)big);
	}
	n = ft_strlen(little);
	if (len == 0)
		return (NULL);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
		{
			return ((char *)big);
		}
		++big;
		--len;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char	str[] = "Hello ita, world its a test";//27
	char	str1[] = "its";//3
	char	*result;

	result = ft_strnstr(str, str1, 19);
	printf("%s\n%d\n", result, ft_strlen(str));
	return (0);
}
*/