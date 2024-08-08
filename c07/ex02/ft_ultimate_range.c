/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:09:08 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/08 09:19:36 by aledupon         ###   ########.fr       */
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
