/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:50:46 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/24 12:07:28 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		n = 0;
		while (str[i + n] == to_find[n])
		{
			if (to_find[n + 1] == '\0')
			{
				return (str + i);
			}
			n++;
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int main()
{
  printf("%s", ft_strstr("iftest", "te"));
}*/
