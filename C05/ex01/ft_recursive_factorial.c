/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:25:33 by mparsyan          #+#    #+#             */
/*   Updated: 2021/10/26 18:16:14 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	count;

	count = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		count = nb * ft_recursive_factorial(nb - 1);
	return (count);
}
