/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:06:10 by yslami            #+#    #+#             */
/*   Updated: 2024/10/21 19:12:46 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_kmp {
    const char  *str;
    const char  *to_find;
    int         *lps;
    int         str_len;
    int         to_find_len;
}               t_kmp;
int		ft_strlen(const char *str);
char	*ft_strcat(char *src, char *dest);

#endif