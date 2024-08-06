/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:41:39 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/24 09:37:13 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	vrai;

	i = 0;
	vrai = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	printf("%d", ft_str_is_uppercase("HIFERFIWO"));
}*/
