/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:53:52 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 17:57:46 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_putchar_fd - write character c on a specified file descriptor
 * 
 * @c: character to write
 * @fd: file descriptor on which to write
 * 
 * Description: The ft_putchar_fd() function writes the character c on the
 * 				file descriptor fd.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void)
{
    ft_putchar_fd('A', 1);
    ft_putchar_fd('\n', 1);
    return (0);
}
*/