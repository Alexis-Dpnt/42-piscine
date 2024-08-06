/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:59:04 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/27 18:50:14 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
		{
			ft_putstr("2147483648");
			return ;
		}
		else
		{
			nbr = -nbr;
		}
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar('0' + nbr % 10);
}

/*int	main()
{
    int n = -2147483648;
    ft_putnbr(n);
}*/
