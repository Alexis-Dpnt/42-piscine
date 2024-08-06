/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:15:58 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/06 11:25:21 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nb_depart;
	int	i;

	i = 0;
	nb_depart = nb;
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (power < 0)
		return (0);
	else
	{
		while (i < power - 1)
		{
			nb *= nb_depart;
			i++;
		}
		return (nb);
	}
}
/*#include <stdio.h>

int	main()
{
	printf("%d", ft_iterative_power(4, 2));
}*/
