/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:09:08 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/05 09:27:45 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min != max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *range;

	printf("Warn: Any segfault will mean that arrays are not corlocated\n");

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2: %d, %d, %d\n", range[0], range[1], range[2]);
	
	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));
	
	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
}*/