/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_utils2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanahiz <kanahiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 04:20:21 by kanahiz           #+#    #+#             */
/*   Updated: 2025/11/28 04:21:24 by kanahiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putpointer(void *p)
{
	int	cnt;

	cnt = 0;
	if (!p)
	{
		ft_putstr("(nil)");
		return (5);
	}
	cnt += ft_putstr("0x");
	cnt += ft_puthexa_lo((unsigned long long)p);
	return (cnt);
}

int	ft_puthexa_up(unsigned int n)
{
	int		cnt;
	char	c;
	char	*hex;

	hex = "0123456789ABCDEF";
	cnt = 0;
	if (n > 15)
		cnt += ft_puthexa_up(n / 16);
	c = hex[n % 16];
	cnt += ft_putchar(c);
	return (cnt);
}

int	ft_puthexa_lo(unsigned int n)
{
	int		cnt;
	char	c;
	char	*hex;

	hex = "0123456789abcdef";
	cnt = 0;
	if (n > 15)
		cnt += ft_puthexa_lo(n / 16);
	c = hex[n % 16];
	cnt += ft_putchar(c);
	return (cnt);
}
