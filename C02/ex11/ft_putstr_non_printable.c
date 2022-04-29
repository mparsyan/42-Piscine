/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:57:47 by mparsyan          #+#    #+#             */
/*   Updated: 2021/10/20 16:28:20 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}

void	hex(unsigned char a)
{
	char	*arr;

	arr = "0123456789abcdef";
	putchar(arr[a / 16]);
	putchar(arr[a % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str == 127)
		{
			putchar('\\');
			hex(*str);
		}
		else
		{
			putchar(*str);
		}
		str++;
	}	
}
