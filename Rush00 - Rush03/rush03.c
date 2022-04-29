/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:24:49 by mparsyan          #+#    #+#             */
/*   Updated: 2021/10/24 15:20:43 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_sec(int x, int y, int i, int j)
{
	while (i <= x)
	{
		if ((i == 1 && j == 1) || (i == 1 && j == y))
			ft_putchar('A');
		else if ((i == x && j == 1) || (i == x && j == y))
			ft_putchar('C');
		else if (j == 1 && i > 1 && i < x)
			ft_putchar('B');
		else if (i == 1 && j > 1 && j < y)
			ft_putchar('B');
		else if (j == y && i > 1 && i < x)
			ft_putchar('B');
		else if (i == x && j > 1 && j < y)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y && x > 0)
	{
		i = 1;
		rush_sec(x, y, i, j);
		ft_putchar('\n');
		j++;
	}
}
