/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:24:45 by mparsyan          #+#    #+#             */
/*   Updated: 2021/11/03 16:26:56 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	str_lenght(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*str_cpy(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

char	*ft_strdup(char *src)
{
	char	*src1;

	src1 = malloc((str_lenght(src) + 1) * sizeof(char));
	if (src1 != NULL)
		return (str_cpy(src1, src));
	else
		return (src1);
}
