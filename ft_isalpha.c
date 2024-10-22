/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:02:17 by yslami            #+#    #+#             */
/*   Updated: 2024/10/21 23:18:09 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_maj(int c)
{
	return (c >= 'A' && c <= 'Z');
}

static int	ft_min(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	isalpha(int c)
{
	return (ft_maj(c) || ft_min(c));
}
