/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:59:18 by maarroud          #+#    #+#             */
/*   Updated: 2023/02/15 16:32:23 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_args_is_unsigned(va_list args);
int		ft_args_is_upc_hexa(va_list args);
int		ft_args_is_str(va_list args);
int		ft_args_is_prct(void);
int		ft_args_is_lowc_hexa(va_list args);
int		ft_args_is_char(va_list args);
int		ft_args_is_base_ten(va_list args);
int		ft_printf(const char *format, ...);
int		ft_conversion(const char *format, int i, va_list args);
int		ft_address_pointer(va_list args);
int		ft_putchar(char c);
int		ft_putstr(char *s);

#endif