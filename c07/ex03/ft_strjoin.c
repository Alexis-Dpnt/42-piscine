/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:42:28 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/05 09:32:12 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		n;
	int		total_length;

	i = 0;
	total_length = 0;
	n = 0;
	while (n < size)
	{
		total_length += ft_strlen(strs[i]);
		if (n < size - 1)
			total_length += ft_strlen(sep);
		n++;
	}
	dest = malloc(sizeof(char) * total_length + 1);
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i != size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*#include <stdio.h>

int main(void)
{
	char *a[2] = { "salut", "cava" };
	char *sep = ", ";
	int	size;

	size = 2;
	printf("%s\n", ft_strjoin(size, a, sep));
}*/
