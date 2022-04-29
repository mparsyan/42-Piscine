/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:33:06 by mparsyan          #+#    #+#             */
/*   Updated: 2021/10/21 18:00:25 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[count] != '\0')
	{
		if (i == 0 && (str[count] >= 'a' && str[count] <= 'z'))
		{
			str[count] -= 32;
			i++;
		}
		else if (i > 0 && (str[count] >= 'A' && str[count] <= 'Z'))
			str[count] += 32;
		else if ((str[count] < '0') || (str[count] > '9' && str[count] < 'A')
			|| (str[count] > 'Z' && str[count] < 'a') || str[count] > 'z')
		{
			i = 0;
		}
		else
			i++;
		count++;
	}
	return (str);
}

int main()
{
	char a[] = "dghsg h 2kh3h";
	printf("%s",ft_strcapitalize(a));
}
