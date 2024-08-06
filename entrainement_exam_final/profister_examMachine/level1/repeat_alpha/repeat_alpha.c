/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:22:54 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/06 16:47:35 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	n;
	int	test;
	int count;

	i = 1;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argv[i][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	n = 0;
	while (argv[i][n])
	{
		if (argv[i][n] >= 'a' && argv[i][n] <= 'z')
		{
			test = argv[i][n] - 'a' + 1;
			count = 0;
			while (count < test)
			{
				write(1, &argv[i][n], 1);
				count++;
			}
		}
		else
			write(1, &argv[i][n], 1);
		n++;
	}
	write(1, "\n", 1);
	return (0);
}