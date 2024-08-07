/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:12:02 by alexis            #+#    #+#             */
/*   Updated: 2024/08/07 13:45:01 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "square.h"

t_Square	find_largest_square(char **map, int rows, int cols, char obstacle)
{
	int			**dp;
	int			i;
	int			j;
	int			min_val;
	t_Square	max_square;

	dp = malloc(rows * sizeof(int *));
	i = 0;
	while (i < rows)
	{
		dp[i] = malloc(cols * sizeof(int));
		i++;
	}
	max_square = {0, 0, 0};
	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (map[i][j] == obstacle)
				dp[i][j] = 0;
			else if (i == 0 || j == 0)
				dp[i][j] = 1;
			else
			{
				min_val = dp[i - 1][j];
				if (dp[i][j - 1] < min_val)
					min_val = dp[i][j - 1];
				if (dp[i - 1][j - 1] < min_val)
					min_val = dp[i - 1][j - 1];
				dp[i][j] = 1 + min_val;
			}
			if (dp[i][j] > max_square.size)
				max_square = (t_Square){i, j, dp[i][j]};
			j++;
		}
		i++;
	}
	i = 0;
	while (i < rows)
	{
		free(dp[i]);
		i++;
	}
	free(dp);
	return (max_square);
}

void	draw_square(char **map, t_Square square, char full)
{
	int	i;
	int	j;

	i = square.x;
	while (i > square.x - square.size)
	{
		j = square.y;
		while (j > square.y - square.size)
		{
			map[i][j] = full;
			j--;
		}
		i--;
	}
}
