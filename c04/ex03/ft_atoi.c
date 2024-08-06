/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:56:16 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/27 18:51:39 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_neg(int n)
{
	if (n % 2 == 0)
	{
		return (0);
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	nbr;

	i = 0;
	n = 0;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			n++;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	if (is_neg(n) == 0)
		return (nbr);
	return (-nbr);
}
/*
int main()
{
	char b[] = "  --+-1 2u4";
	printf("%d\n", ft_atoi(b));
}
*/
