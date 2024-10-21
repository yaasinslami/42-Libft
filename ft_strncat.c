/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:43:40 by yslami            #+#    #+#             */
/*   Updated: 2024/10/18 17:50:03 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*p;

	p = dest;
	while (*p)
	{
		p++;
	}
	i = 0;
	while (*src && i < n)
	{
		*p = *src;
		p++;
		src++;
		i++;
	}
	*p = '\0';
	return (dest);
}
