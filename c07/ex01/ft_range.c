/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:22:00 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/08 09:19:37 by aledupon         ###   ########.fr       */
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
