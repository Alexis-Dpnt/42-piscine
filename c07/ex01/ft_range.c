/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:22:00 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/05 15:27:11 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*n;

	if (min >= max)
		return (0);
	n = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min != max)
	{
		n[i] = min;
		min++;
		i++;
	}
	return (n);
}
#include <stdio.h>


int	main(void)
{
	int *range;

	printf("Warn: Don't forgw size of `malloc` arrays\n");
	printf("Warn: Any segfault will mean that arrays are not correctlyted\n");

	range = ft_range(0, 5);
	printf("0, 1, 2,: %d, %d, %d\n", range[0], range[1], range[2]);
	
	range = ft_range(3, 3);
	
	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d", range[0], range[1]);
}