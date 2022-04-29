/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:19:21 by mparsyan          #+#    #+#             */
/*   Updated: 2021/10/23 16:59:07 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	if (*to_find == 0)
	{
		return (str);
	}
	a = 0;
	while (str[a])
	{
		b = 0;
		while (to_find[b] == str[a + b])
		{
			if (to_find[b + 1] == '\0')
			{
				return (str + a);
			}
			b++;
		}
		a++;
	}
	return (0);
}
