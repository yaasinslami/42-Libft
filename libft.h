/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:06:10 by yslami            #+#    #+#             */
/*   Updated: 2024/10/21 22:28:31 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int		ft_strlen(const char *str);
char	*ft_strcat(char *src, char *dest);
char	*ft_stnrstr(const char *str, const char *to_find);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif