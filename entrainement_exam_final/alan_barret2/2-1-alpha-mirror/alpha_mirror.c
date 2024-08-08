/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:10:26 by alexis            #+#    #+#             */
/*   Updated: 2024/08/07 22:10:05 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int check_rank_alpha_bfM(char c)
{
    int result;
    if (c >= 'a' && c <= 'm')
        result = c - 'a' + 1;
    else if (c >= 'A' && c <= 'M')
        result = c - 'A' + 1;
    return (result);
}

int check_rank_alpha_aftM(char c)
{
    int result;
    if (c >= 'n' && c <= 'z')
        result = 'z' - c;
    else if (c >= 'N' && c <= 'Z')
        result = 'Z' - c;
    return (result);
}

int main(int argc, char **argv)
{
    int     i;
    i = 0;
    if (argc < 2 || argv[1][0] == '\0')
    {
        write(1, "\n", 1);
        return (1);
    }
    while (argv[1][i])
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
            argv[1][i] = 'z' - check_rank_alpha_bfM(argv[1][i]) + 1;
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
            argv[1][i] = 'Z' - check_rank_alpha_bfM(argv[1][i]) + 1;
        else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
            argv[1][i] = 'a' + check_rank_alpha_aftM(argv[1][i]);
        else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
            argv[1][i] = 'A' + check_rank_alpha_aftM(argv[1][i]);
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);    
}


