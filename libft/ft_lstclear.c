/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:07:32 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/17 19:04:55 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!(*lst) || !del)
		return ;
	while ((*lst))
	{	
		tmp = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = tmp;
	}
}

// void test()
// {
// 	t_list *list;

// 	char *s1 = malloc(10);
// 	list = ft_lstnew(s1);
// 	ft_lstclear(&list, free);
// }

// int main()
// {
// 	test();
// 	system("leaks a.out");
// 	return (0);
// }