/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:51:03 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/29 09:54:27 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	n = 0;
	i = 1;
	(void) argc;
	while (argv[i])
	{
		n = 0;
		while (argv[i][n])
		{
			write (1, &argv[i][n], 1);
			n++;
		}
		write(1, "\n", 1);
		i++;
	}
}
