/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanahiz <kanahiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 00:07:02 by kanahiz           #+#    #+#             */
/*   Updated: 2025/11/28 04:33:33 by kanahiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_print_arg(int specifier, va_list args)
{
	int	cnt;

	cnt = 0;
	if (specifier == 'c')
		cnt = ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		cnt = ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
		cnt = put_adrs(va_arg(args, void *));
	else if (specifier == 'd' || specifier == 'i')
		cnt = ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		cnt = ft_putnbr(va_arg(args, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		cnt = ft_puthexa(va_arg(args, unsigned int), specifier);
	else if (specifier == '%')
		cnt = ft_putchar('%');
	return (cnt);
}

int	ft_printf(const char *source_str, ...)
{
	va_list		args;
	int			cnt;
	size_t		i;

	if (!source_str)
		return (-1);
	i = 0;
	va_start(args, source_str);
	cnt = 0;
	while (source_str[i])
	{
		if (s[i] == '%')
		{
			if (source_str[i + 1] == 0)
                return (-1);
			cnt += ft_print_arg(s[++i], args);
		}
		else
			cnt += ft_putchar(s[i]);
		if (s[i])
			i++;
	}
	va_end(args);
	return (cnt);
}
