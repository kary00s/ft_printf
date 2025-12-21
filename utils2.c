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

static	int	hex_lentgh(unsigned long hex)
{
	int	lentgh;

	lentgh = 0;
	if (hex == 0)
		return (1);
	while (hex)
	{
		hex /= 16;
		lentgh++;
	}
	return (lentgh);
}

static void	puthexa_up(unsigned long n)
{
	if (n >= 16)
		puthexa_up(n / 16);
	ft_putchar("0123456789ABCDEF"[n % 16]);
}

static void	puthexa_lw(unsigned long n)
{
	if (n >= 16)
		puthexa_lw(n / 16);
	ft_putchar("0123456789abcdef"[n % 16]);
}

int	ft_puthexa(unsigned long n, int specifier)
{
	int	len;

	len = hex_lentgh((unsigned long)n);
	if (specifier == 'x')
		puthexa_lw((unsigned long)n);
	else if (specifier == 'X')
		puthexa_up(n);
	return (len);
}

int	put_adrs(void *add)
{
	unsigned long	adrs;
	int				len;

	len = 0;
	adrs = (unsigned long)add;
	if (!add)
		return (ft_putstr("(nil)"));
	len += hex_lentgh(adrs);
	len += ft_putstr("0x");
	puthexa_lw(adrs);
	return (len);
}
