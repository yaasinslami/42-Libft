/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:42:39 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 13:27:52 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_calloc - memory allocation
 * 
 * @nmemb: number of cases to allocate
 * @size: size of each element
 * 
 * Description: ft_calloc function allocate memory
 * 				The allocated memory is filled with bytes of value zero.
 * 
 * Return: returns a pointer to allocated memory If successful
 * 			otherwise return (NULL)
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
int main()
{
	int	*nums = (int *)ft_calloc(5, sizeof(int));
	int i = 0;
	while (i < 5)
	{
		ft_putnbr_fd(nums[i], 1);
		write(1, &nums[i], 1);
		i++;
	}
	free(nums);
	return (0);
}
*/