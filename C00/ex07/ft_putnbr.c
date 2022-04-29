/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:34:39 by mparsyan          #+#    #+#             */
/*   Updated: 2021/10/19 16:38:03 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int nb)
{
	const char		sign_symbol = '-';
	char			buffer[10];
	unsigned int	it;

	it = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		write (1, &sign_symbol, 1);
	}
	while (nb)
	{
		buffer[it] = (nb % 10) + 48;
		nb = nb / 10;
		it++;
	}
	while (it)
	{
		it--;
		write (1, &buffer[it], 1);
	}
}

void	ft_putnbr(int nb)
{
	char	zero_symbol;

	zero_symbol = '0';
	if (nb == 0)
	{
		write (1, &zero_symbol, 1);
	}
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
		ft_putint(nb);
}
