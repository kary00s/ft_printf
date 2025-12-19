/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanahiz <kanahiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 00:09:53 by kanahiz           #+#    #+#             */
/*   Updated: 2025/11/28 04:18:55 by kanahiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *source_str, ...);
int	ft_print_arg(va_list *args, char specifier);
int	check_me(char specifier);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putpointer(void *p);
int	ft_putnbr(int n);
int	ft_puthexa_up(unsigned int n);
int	ft_puthexa_lo(unsigned int n);
int	ft_putnbr_un(unsigned int n);

#endif