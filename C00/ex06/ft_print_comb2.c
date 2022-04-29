/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_print_comb2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:14:35 by mparsyan          #+#    #+#             */
/*   Updated: 2021/10/18 19:09:20 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_uint(unsigned int arg)
{
	char	symbol1;
	char	symbol2;

	if (arg <= 9)
	{
		symbol1 = '0';
		symbol2 = (char)arg + 48;
		write (1, &symbol1, 1);
		write (1, &symbol2, 1);
	}
	else
	{
		symbol1 = (char)arg / 10 + 48;
		symbol2 = (char)arg % 10 + 48;
		write (1, &symbol1, 1);
		write (1, &symbol2, 1);
	}
}

void	ft_print_node(unsigned int arg1, unsigned int arg2)
{
	char	delimiter1;
	char	delimiter2;

	delimiter1 = ',';
	delimiter2 = ' ';
	ft_print_uint(arg1);
	write (1, &delimiter2, 1);
	ft_print_uint(arg2);
	if (arg1 == 98 && arg2 == 99)
		;
	else
	{
		write (1, &delimiter1, 1);
		write (1, &delimiter2, 1);
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_print_node(first, second);
			second++;
		}
		first++;
	}
}
