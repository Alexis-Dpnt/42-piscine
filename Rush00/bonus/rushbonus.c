/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:05:00 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/20 16:10:31 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	check_lens(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ultimate_rush(char *str, int x, int y)
{
	int	x_cur;
	int	y_cur;

	y_cur = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (y_cur++ <= y - 1)
	{
		x_cur = 1;
		while (x_cur <= x)
		{
			if ((y_cur == 1 && x_cur == 1) || (y_cur == 1 && x_cur == x))
				ft_putchar(str[0]);
			else if ((y_cur == y && x_cur == 1) || (y_cur == y && x_cur == x))
				ft_putchar(str[0]);
			else if ((y_cur == 1 && x_cur <= x) || (y_cur == y && x_cur <= x))
				ft_putchar(str[1]);
			else if ((y_cur <= y && x_cur == 1) || (y_cur <= y && x_cur == x))
				ft_putchar(str[2]);
			else
				ft_putchar(str[3]);
			x_cur++;
		}
		ft_putchar('\n');
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}
