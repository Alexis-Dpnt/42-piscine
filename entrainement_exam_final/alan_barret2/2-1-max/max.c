/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:52:27 by alexis            #+#    #+#             */
/*   Updated: 2024/08/07 23:14:36 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
    unsigned int i;
    int max;

    i = 0;
    max = tab[i];
    while (i != len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}

/*#include <stdio.h>

int main()
{
    unsigned int len = 5;
    int tab[5] = {10, 3, 420, 342, 520};
    printf("%d", max(tab, len));
}*/