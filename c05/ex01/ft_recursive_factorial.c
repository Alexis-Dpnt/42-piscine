/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:24:20 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/01 15:13:43 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else if (nb != 0)
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}

/*#include <stdio.h>

int	main()
{
	printf("%d", ft_recursive_factorial(10));
}*/
