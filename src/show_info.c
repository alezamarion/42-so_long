/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:52:15 by azamario          #+#    #+#             */
/*   Updated: 2021/10/13 17:40:54 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void show_info(t_game *game)
{
    printf("Moves: %d\n", game->moves);
    //printf("Collectibles: %d, Collected: %d", game->collectibles, game->collected);
    //print_map(game->map);
}