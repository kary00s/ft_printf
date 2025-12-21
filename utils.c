/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanahiz <kanahiz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:12:35 by kanahiz           #+#    #+#             */
/*   Updated: 2025/11/28 04:20:18 by kanahiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(long nbr)
{
	int	cnt;

	cnt = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		cnt++;
	}
	if (nbr >= 10)
		cnt += ft_putnbr(nbr / 10);
	cnt += ft_putchar(nbr % 10 + '0');
	return (cnt);
}

int	ft_putstr(const char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
	return (i);
}
