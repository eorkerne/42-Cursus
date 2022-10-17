/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:18:58 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/17 19:25:41 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	else
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}

// void test()
// {
// 	t_list *list;

// 	char *s1 = malloc(10);
// 	list = ft_lstnew(s1);
// 	ft_lstlast(list);
// }

// // int main()
// // {
// // 	test();
// // 	system("leaks a.out");
// // 	return (0);
// // }