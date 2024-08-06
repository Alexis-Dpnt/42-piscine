/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:31:16 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/31 17:52:39 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	t;

	t = nb;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i != t)
	{
		nb = nb * i;
		i++;
	}
	return (nb);
}

/*#include <stdio.h>

int main()
{
	int nb;
	nb = 10;
	printf("%d", ft_iterative_factorial(nb));
}*/
