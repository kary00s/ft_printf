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

int	ft_print_arg(va_list *args, char specifier)
{
	int	cnt;

	cnt = 0;
	if (specifier == '%')
		cnt += ft_putchar('%');
	else if (specifier == 'c')
		cnt += ft_putchar(va_arg(*args, int));
	else if (specifier == 's')
		cnt += ft_putstr(va_arg(*args, char *));
	else if (specifier == 'p')
		cnt += ft_putpointer(va_arg(*args, void *));
	else if (specifier == 'd' || specifier == 'i')
		cnt += ft_putnbr(va_arg(*args, int));
	else if (specifier == 'u')
		cnt += ft_putnbr_un(va_arg(*args, unsigned int));
	else if (specifier == 'x')
		cnt += ft_puthexa_lo(va_arg(*args, unsigned int));
	else if (specifier == 'X')
		cnt += ft_puthexa_up(va_arg(*args, unsigned int));
	else if (specifier == '%')
		cnt += ft_putchar(specifier);
	return (cnt);
}

int	check_specifier(char specifier)
{
	if (specifier == 'c' || specifier == 's' || specifier == 'p'
		|| specifier == 'i' || specifier == 'd' || specifier == 'u'
		|| specifier == '%' || specifier == 'x' || specifier == 'X')
		return (1);
	return (0);
}

int	ft_printf(char const *source_str, ...)
{
	va_list	args;
	int		i;
	int		cnt;

	cnt = 0;
	if (!source_str || write(1, 0, 0) < 0)
		return (-1);
	va_start(args, source_str);
	i = 0;
	while (source_str[i])
	{
		if (source_str[i] == '%' && source_str[i + 1] != 0
			&& check_specifier(source_str[i + 1]) == 1)
		{
			cnt += ft_print_arg(&args, source_str[i + 1]);
			i++;
		}
		else
			cnt += ft_putchar(source_str[i]);
		i++;
	}
	va_end(args);
	return (cnt);
}
