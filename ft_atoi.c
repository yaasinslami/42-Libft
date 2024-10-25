/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:32:57 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 15:54:27 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_atoi - Converts string to integer
 * @str: String to convert
 * Return: Converted integer
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	sign = 1;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result * sign);
}

/*
int main()
{
	char str1[] = "15613";
	char str2[] = "-15613";
	char str3[] = "+15asd613";
	char str4[] = "-1561dase3";
	ft_putnbr_fd(ft_atoi(str1), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(str2), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(str3), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi(str4), 1);
	ft_putchar_fd('\n', 1);
}
*/
