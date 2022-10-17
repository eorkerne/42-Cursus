/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:30:27 by maarroud          #+#    #+#             */
/*   Updated: 2022/10/17 18:54:23 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		ptr = *lst;
		while (ptr)
			ptr = ptr->next;
		ptr->next = new;
	}
}

// int main(void)
// {
// 	t_list *new;
// 	new = ft_lstnew(NULL);
// 	ft_lstadd_back(&new, ft_lstnew(NULL));
// }
