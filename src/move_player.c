/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 21:03:12 by azamario          #+#    #+#             */
/*   Updated: 2021/10/02 21:48:01 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    move_player(t_game *game, int x, int y)
{
    int i;
    int j;

    i = game->x;
    j = game->y;
    if (game->map[x][y] != '1')
    {
        swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
        game->x = x;
        game->y = y;
    }
    print_map(game->map);
}

void swap_positions (char *current_pos, char *next_pos, char current_value, char next_value)
{
    *current_pos = next_value;
    *next_pos = current_value;
}