/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:32:31 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/23 15:01:06 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	vrai;

	vrai = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
			vrai = 1;
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
	char *t = "fwef43";
	printf("%d", ft_str_is_alpha(t));
}*/
