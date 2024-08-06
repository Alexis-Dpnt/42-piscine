/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:21:43 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/23 15:02:04 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	vrai;

	vrai = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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

int	main()
{
	printf("%d", ft_str_is_lowercase(""));
}*/
