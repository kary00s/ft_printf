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
# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(const char *str);
int	ft_putchar(char c);
int	ft_putnbr(long nbr);
int	ft_puthexa(unsigned long n, int specifier);
int	put_adrs(void *add);
int	ft_printf(const char *str, ...);

#endif