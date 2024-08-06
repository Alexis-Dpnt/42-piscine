/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <aledupon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:34:53 by aledupon          #+#    #+#             */
/*   Updated: 2024/07/31 19:28:01 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	resultat;
	int	i;

	resultat = 0;
	i = 0;
	while (resultat < nb)
	{
		i++;
		resultat = i * i;
	}
	if (resultat == nb)
		return (i);
	else
		return (0);
}

/*int	main()
{
	printf("%d", ft_sqrt(-10));
}*/