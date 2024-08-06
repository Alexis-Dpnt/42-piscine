/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:36:48 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/05 12:40:55 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int main(void)
{
	t_point point;
	set_point(&point);
	return (0);
}