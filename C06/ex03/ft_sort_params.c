/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparsyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:47:27 by mparsyan          #+#    #+#             */
/*   Updated: 2021/11/03 22:07:09 by mparsyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char	*arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
	{
		write(1, &arr[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	strcmp(const char *arr1, const char *arr2)
{
	int	i;

	i = 0;
	while ((arr1[i] == arr2[i]) && (arr1[i] != '\0') && (arr2[i] != '\0'))
		i++;
	return (arr1[i] - arr2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	arr[10000];

	i = 1;
	j = 1;
	while (i < argc)
	{
		arr[i] = i;
		i++;
	}
	while (j < argc)
	{
		k = j;
		while (k < argc)
		{
			if (strcmp(argv[arr[j]], argv[arr[k]]) > 0)
				swap(&arr[j], &arr[k]);
			k++;
		}
		putstr(argv[arr[j++]]);
	}
	return (0);
}
