/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:05:51 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/05 16:58:29 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_rev_print(char *str)
{
	int max;
	int i;
	char swap;

	i = 0;
	max = ft_strlen(str) - 1;
	while (max >= 0)
	{
		write(1, &str[max], 1);
		max--;
	}
	write(1, "\n", 1);
}

int main()
{
	ft_rev_print("set");
	return (0);
}