/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:24:21 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 21:18:26 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstmap - Applies a function to each element of a list and returns
 *             a new list with the results. If allocation fails, cleans
 *             up and returns NULL.
 *
 * @lst: The original list.
 * @f: The function to apply to each element's content.
 * @del: The function to delete the content if necessary.
 *
 * Return: A new list where each element's content is the result of
 *         applying f to the corresponding element of lst, or NULL
 *         if allocation fails.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_node;
	t_list	*curr;

	new_head = NULL;
	curr = lst;
	while (curr)
	{
		new_node = ft_lstnew(f(curr->content));
		if (!new_node)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_node);
		curr = curr->next;
	}
	return (new_head);
}

/*
static void del(void *content)
{
    if (content)
        free(content);
}

static void *map_content(void *content)
{
    char *str = (char *)content;
    char *new_str = ft_strdup(str);

    if (!new_str)
        return (NULL);

    // Add prefix "Modified: " to content
    char *prefix = "Modified: ";
    char *final = ft_strjoin(prefix, new_str);

    free(new_str);
    return (final);
}

int main(void)
{
	t_list	*lst = NULL;

	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Node 1")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Node 2")));

	t_list	*curr = lst;
	ft_putendl_fd("Original list:", 1);
	while (curr)
	{
		ft_putendl_fd(curr->content, 1);
		curr = curr->next;
	}

	ft_putendl_fd("\nAfter ft_lstmap:", 1);
	t_list	*mapped = ft_lstmap(lst, map_content, del);

	curr = mapped;
	while (curr)
	{
		ft_putendl_fd(curr->content, 1);
		curr = curr->next;
	}

	//free the lists
	ft_lstclear(&lst, del);
	ft_lstclear(&mapped, del);
}
*/
