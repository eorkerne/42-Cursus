/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:00:20 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/25 19:11:01 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define EVEN(nbr) nbr % 2 == 0
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."
# define SUCCESS 0

typedef enum e_f_or_t
{
	TRUE = 1,
	FALSE = 0,
}	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif