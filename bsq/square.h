/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:12:38 by alexis            #+#    #+#             */
/*   Updated: 2024/08/07 13:41:13 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUARE_H
#define SQUARE_H

typedef struct t_Square
{
	int	x;
	int	y;
	int	size;
}	t_Square;

t_Square	find_largest_square(char **map, int rows, int cols, char obstacle);
void		draw_square(char **map, t_Square square, char full);

#endif
