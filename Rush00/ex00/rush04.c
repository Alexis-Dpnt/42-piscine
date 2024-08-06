/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:41:17 by lfoffano          #+#    #+#             */
/*   Updated: 2024/07/20 16:15:53 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int	x_current;
	int	y_current;

	y_current = 0;
	while (y_current++ <= y - 1)
	{
		x_current = 0;
		while (x_current++ <= x - 1)
		{
			if ((x_current == 1 && y_current == 1))
				ft_putchar('A');
			else if ((x_current == x && x != 1) && (y == y_current && y != 1))
				ft_putchar('A');
			else if ((x_current == x && y_current == 1)
				|| (x_current == 1 && y_current == y))
				ft_putchar('C');
			else if (x_current < x && (y_current == 1 || y_current == y))
				ft_putchar('B');
			else if (x_current == x || x_current == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
