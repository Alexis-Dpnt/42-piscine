/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 00:37:23 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/30 11:04:09 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_print(int m, int c, int d, int u)
{
	write(1, &m, 1);
	write(1, &c, 1);
	write(1, " ", 1);
	write(1, &d, 1);
	write(1, &u, 1);
	write(1, ", ", 1);
}

void	ft_print_comb2(void)
{
	char	m;
	char	c;
	char	d;
	char	u;

	m = '0';
	while (m <= '9')
	{
		c = '0';
		while (c <= '8')
		{
			d = '0';
			while (d <= '9')
			{
				u = '0';
				while (u <= '9')
				{
					ft_print(m, c, d, u++);
				}
				d++;
			}
			c++;
		}
		m++;
	}
}

int	main()
{
	ft_print_comb2();
}