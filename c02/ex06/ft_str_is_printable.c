/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:30:17 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/23 15:02:55 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	vrai;

	i = 0;
	vrai = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d", ft_str_is_printable("fbwhufgHI2u38428$$#64tgfsdj"));
}*/
