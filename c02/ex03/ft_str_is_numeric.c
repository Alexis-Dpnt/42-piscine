/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:06:50 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/23 15:01:36 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	vrai;

	i = 0;
	vrai = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			vrai = 1;
			i++;
		}
		else
		{
			return (0);
		}
	}
	if (str[0] == '\0')
	{
		vrai = 1;
	}
	return (vrai);
}

/*#include <stdio.h>

int main()
{
	printf("%d", ft_str_is_numeric("432ui23"));
}*/
