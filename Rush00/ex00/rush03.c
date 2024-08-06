/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmenard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:51:59 by pmenard           #+#    #+#             */
/*   Updated: 2024/07/20 12:14:07 by pmenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_current;
	int	y_current;

	x_current = 1;
	y_current = 1;
	while (y_current <= y)
	{
		x_current = 1;
		while (x_current <= x)
		{
			if (x_current == 1 && (y_current == 1 || y_current == y))
				ft_putchar('A');
			else if (x_current == x && (y_current == 1 || y_current == y))
				ft_putchar('C');
			else if (x_current < x && (y_current == 1 || y_current == y))
				ft_putchar('B');
			else if (x_current == x || x_current == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			x_current++;
		}
		ft_putchar('\n');
		y_current++;
	}
}
