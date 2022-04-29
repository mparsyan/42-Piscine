/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:23:39 by mparsyan          #+#    #+#             */
/*   Updated: 2021/10/18 12:48:25 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	flag;
	int	it;

	flag = 1;
	it = 0;
	while (flag)
	{
		flag = 0;
		it = 0;
		while (it < size - 1)
		{
			if (tab[it] > tab[it + 1])
			{
				swap (&tab[it], &tab[it + 1]);
				flag = 1;
			}
			it++;
		}
	}
}
