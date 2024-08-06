/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aledupon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 22:20:47 by aledupon          #+#    #+#             */
/*   Updated: 2024/08/05 09:11:25 by aledupon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
#define EVEN(nbr) ((nbr) % 2 == 0)
#define EVEN_MSG "pair\n"
#define ODD_MSG "impair\n"
#define SUCCESS 0
typedef int t_bool;
