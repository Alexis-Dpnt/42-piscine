/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:42:05 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/05 14:01:26 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	mult3(int nbr)
{
	if (((nbr / 3) * 3) == nbr)
	{
		return (1);
	}
	else
		return (0);
}

int	mult5(int nbr)
{
	if (((nbr / 5) * 5) == nbr)
	{
		return (1);
	}
	else
		return (0);
}

int main()
{
	int nbr;
	char cnbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if ((mult3(nbr) == 1) && (mult5(nbr) == 1))
			write(1, "fizzbuzz", 8);
		else if (mult3(nbr) == 1)
			write(1, "fizz", 4);
		else if (mult5(nbr) == 1)
			write(1, "buzz", 4);
		else
			ft_putnbr(nbr);
		write(1, "\n", 1);
		nbr++;
	}
}