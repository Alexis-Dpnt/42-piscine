/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:16:42 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/28 21:28:52 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int		i;

	i = argc - 1;
	while (i >= 1)
	{
		ft_putstr (argv[i]);
		ft_putstr ("\n");
		i--;
	}
	return (0);
}
