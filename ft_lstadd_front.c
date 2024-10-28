/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:08:17 by yslami            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/28 15:35:35 by yslami           ###   ########.fr       */
=======
/*   Updated: 2024/10/27 14:23:54 by yslami           ###   ########.fr       */
>>>>>>> 8ef7f1f51330c03d0cf8125f2bf780e1a346a744
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstadd_front - Adds a new element at the front of the list
 *
 * @lst: pointer address to the first element of the list
 * @new: pointer address of the new element to add to the list
 *
 * Description: Add the 'new' element at the front of the list
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
<<<<<<< HEAD
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
=======
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
>>>>>>> 8ef7f1f51330c03d0cf8125f2bf780e1a346a744
}

/*
static void del_content(void *content)
{
    if (content)
        free(content);
}

int main(void)
{
    t_list *lst = NULL;
    t_list *new1, *new2;

    new1 = ft_lstnew(ft_strdup("Node 1"));
    new2 = ft_lstnew(ft_strdup("Node 2"));

    ft_lstadd_front(&lst, new1);
    ft_lstadd_front(&lst, new2);

	t_list	*curr = lst;
    while (curr)
    {
        ft_putendl_fd(curr->content, 1);
		curr = curr->next;
	}
	ft_lstclear(&lst, del_content);
    return (0);
}
*/
