/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:36:23 by mparsyan          #+#    #+#             */
/*   Updated: 2021/10/21 12:45:44 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	size_of_array(char *arr)
{
	int	count;

	count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = size_of_array(dest);
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
