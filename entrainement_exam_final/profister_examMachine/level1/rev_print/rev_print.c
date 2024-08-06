/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:52:20 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/06 16:52:30 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;
	int n;
	int max;
	char swap;

	i = 1;
	n = 0;
	max = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	max = ft_strlen(argv[i]);
	while (n < max)
	{
		swap = argv[i][n];
		argv[i][n] = argv[i][max - 1];
		argv[i][max - 1] = swap;
		n++;
		max--;
	}
	n = 0;
	ft_putstr(argv[i]);
	write(1, "\n", 1);
	return (0);
}