/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*      argv[argc - 1] ==                                               +:+ +:+         +:+     */
/*   By: alexis <alexis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 22:12:25 by alexis            #+#    #+#             */
/*   Updated: 2024/08/06 22:33:51 by alexis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int check_last_space_tab(char *str, int max)
{
    int i;

    i = max - 1;
    while (str[i] == ' ' ||  str[i] == '\t')
        i--;
    while ((str[i] >= 33) && (str[i] <= 126))
        i--;
    return (i + 1);
}

int check_nb_space_tab(char *str)
{
    int i;

    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int last_space_tab;
    if ((argc != 2) || (check_nb_space_tab(argv[1]) == ft_strlen(argv[1])))
    {
        write(1, "\n", 1);
        return (1);
    }
    last_space_tab = check_last_space_tab(argv[1], ft_strlen(argv[1]));
    while (argv[1][last_space_tab] != '\0')
    {
        if (argv[1][last_space_tab] != ' ')
            write(1, &argv[1][last_space_tab], 1);
        last_space_tab++;
    }
    write(1, "\n", 1);
    return (0);
}