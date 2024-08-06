/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:54:39 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/25 09:02:50 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] && i < n) || (s2[i] && i < n))
	{
		while (i < n)
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
			i++;
		}
	}
	return (0);
}

/*#include <stdio.h>

int main()
{
	int stop = 100;

	printf("%d", ft_strncmp("testf", "testa", stop));
}*/
