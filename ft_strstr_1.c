/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:00:48 by yslami            #+#    #+#             */
/*   Updated: 2024/10/21 20:01:55 by yslami           ###   ########.fr       */
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

char	*kmp_search(t_kmp *kmp)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < kmp->str_len)
	{
		if (kmp->str[i] == kmp->to_find[j])
		{
			i++;
			j++;
		}
		if (j == kmp->to_find_len)
			return ((char *)kmp->str + i - j);
		else if (i < kmp->str_len && kmp->str[i] != kmp->to_find[j])
		{
			if (j != 0)
				j = kmp->lps[j - 1];
			else
				i++;
		}
	}
	return (NULL);
}

char	*ft_strstr(const char *str, const char *to_find)
{
	t_kmp	kmp;
	char	*result;

	if (!str || !to_find)
		return (NULL);
	kmp.str = str;
	kmp.to_find = to_find;
	kmp.str_len = ft_strlen(str);
	kmp.to_find_len = ft_strlen(to_find);
	if (kmp.to_find_len == 0)
		return ((char *)str);
	kmp.lps = (int *)malloc(sizeof(int) * kmp.to_find_len);
	if (!kmp.lps)
		return (NULL);
	compute_lsp_array(kmp.to_find, kmp.to_find_len, kmp.lps);
	result = kmp_search(&kmp);
	free (kmp.lps);
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