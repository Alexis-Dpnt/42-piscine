/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:58:46 by alexis            #+#    #+#             */
/*   Updated: 2024/08/07 13:37:15 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "square.h"

int	main(int argc, char **argv)
{
	int			i;
	int			rows;
	int			cols;
	char		obstacle;
	char		full;
	char		empty;
	char		**map;
	t_Square	largest_square;

	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		return (EXIT_FAILURE);
	}
	map = read_map(argv[1], &rows, &cols, &empty, &obstacle, &full);
	largest_square = find_largest_square(map, rows, cols, obstacle);
	draw_square(map, largest_square, full);
	print_map(map, rows, cols);
	i = 0;
	while (i < rows)
	{
		free(map[i]);
		i++;
	}
	free(map);
	return (EXIT_SUCCESS);
}
