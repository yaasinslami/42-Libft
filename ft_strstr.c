/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:00:48 by yslami            #+#    #+#             */
/*   Updated: 2024/10/21 19:07:57 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	compute_lsp_array(const char *to_find, int to_find_len, int *lps)
{
	int	length;
	int	i;

	lps[0] = 0;
	length = 0;
	i = 1;
	while (i < to_find_len)
	{
		if (to_find[i] == to_find[length])
		{
			length++;
			lps[i] = length;
			i++;
		}
		else
		{
			if (length != 0)
				length = lps[length - 1];
			else
			{
				lps[i] = 0;
				i++;
			}
		}
	}
}

char	*kmp_search(const char *str, const char *to_find,
			int *lps, int str_len, int to_find_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < str_len)
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (j == to_find_len)
		{
			return ((char *)str + i - j);
		}
		else if (i < str_len && str[i] != to_find[j])
		{
			if (j != 0)
				j = lps[j - 1];
			else
				i++;
		}
	}
	return (NULL);
}

char	*ft_strstr(const char *str, const char *to_find)
{
	int		str_len;
	int		to_find_len;
	int		*lps;
	char	*result;

	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
		return ((char *)str);
	lps = (int *)malloc(sizeof(int) * to_find_len);
	if (!lps)
		return (NULL);
	compute_lsp_array(to_find, to_find_len, lps);
	result = kmp_search(str, to_find, lps, str_len, to_find_len);
	free(lps);
	return (result);
}
/*
#include <stdio.h>

int main() {
    const char* txt = "hello, this is a simple example";
    const char* pat = "simple";

    char* result = ft_strstr(txt, pat);
    if (result) {
        printf("Pattern found at position: %ld\n", result - txt);
    } else {
        printf("Pattern not found\n");
    }

    return 0;
}
*/