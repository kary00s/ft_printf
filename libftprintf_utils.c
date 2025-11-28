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

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_un(unsigned int n)
{
	char	c;
	int		cnt;

	cnt = 0;
	if (n > 9)
		cnt += ft_putnbr_un(n / 10);
	c = n % 10 + '0';
	cnt += ft_putchar(c);
	return (cnt);
}

int	ft_putnbr(int n)
{
	char	c;
	int		cnt;

	cnt = 0;
	if (n == -2147483648)
	{
		cnt += ft_putstr("-2147483648");
		return (cnt);
	}
	if (n < 0)
	{
		n = -n;
		cnt += ft_putchar('-');
	}
	if (n > 9)
		cnt += ft_putnbr(n / 10);
	c = n % 10 + '0';
	cnt += ft_putchar(c);
	return (cnt);
}
