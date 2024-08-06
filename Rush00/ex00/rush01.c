/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:53:42 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/20 12:22:38 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int x_current;
	int y_current;

	x_current = 1;
	y_current = 1;
	while (y_current <= y)
	{
		x_current = 1;
		while (x_current <= x)
		{
			if ((y_current == 1 && x_current == 1) || (y_current == y && x_current  == x))
				ft_putchar('/');
			else if ((y_current == y && x_current == 1) || (y_current == 1 && x_current == x))
				 ft_putchar('\\');
			else if (y_current < y && (x_current == 1 || x_current == x))
				ft_putchar('*');
			else if (y_current == y || y_current == 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			x_current++;
		}
		ft_putchar('\n');
		y_current++;
	}
}

int main()
{
	rush(1, 3);
	return (0);
}
