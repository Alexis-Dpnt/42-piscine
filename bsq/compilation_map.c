/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compilation_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:37:11 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/06 09:43:37 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	char a;
	char b;
	char c;

	a = argv[1];
	b = argv[2];
	c = argv[3];
    // Exécute la commande "ls"
    int return_value = system("perl map.pl &a &b &c > sortie.txt");

    // Vérifie si la commande a été exécutée avec succès
    if (return_value == -1) {
        perror("Erreur lors de l'exécution de la commande");
        return 1;
    }

    return 0;
}
