/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:31:33 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/25 19:31:49 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_str *par);

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

#endif