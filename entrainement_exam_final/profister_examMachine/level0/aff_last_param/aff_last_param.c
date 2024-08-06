/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:17:30 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/06 15:37:27 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	i = 0;
	while (argv[argc - 1][i])
	{
		write(1, &argv[argc - 1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
