/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:57:36 by alexis            #+#    #+#             */
/*   Updated: 2024/08/06 21:42:52 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int operation(int nb1, char *operateur, int nb2)
{
    int resultat;

    if (*operateur == '*')
        resultat = nb1 * nb2;
    else if (*operateur == '/')
        resultat = nb1 / nb2;
    else if (*operateur == '-')
        resultat = nb1 - nb2;
    else if (*operateur == '+')
        resultat = nb1 + nb2;
    return (resultat);
}

int main(int argc, char **argv)
{
    int i;

    if (argc < 4)
    {
        write(1, "\n", 1);
        return (1);
    }
    printf("%d\n", operation(atoi(argv[1]), argv[2], atoi(argv[3])));
    return (0);
}