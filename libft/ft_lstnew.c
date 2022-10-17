/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:52:04 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/17 16:02:29 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));
// 	t_list *list;

// 	node1->content = "chameau";
// 	node2->content = "lama";
// 	node3->content = "alpaga";

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	list = node1;

// 	while (list)
// 	{
// 		printf("%s\n", list->content);
// 		list = list->next;
// 	}

// 	return 0;
// }