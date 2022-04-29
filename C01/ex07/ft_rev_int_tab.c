/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:12:12 by mparsyan          #+#    #+#             */
/*   Updated: 2021/10/18 12:18:37 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	it;
	int	temp;

	it = 0;
	temp = 0;
	while (it < size / 2)
	{
		temp = tab[it];
		tab[it] = tab[size - (it + 1)];
		tab[size - (it + 1)] = temp;
		it++;
	}
}
