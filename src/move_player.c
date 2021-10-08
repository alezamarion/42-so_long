/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 21:03:12 by azamario          #+#    #+#             */
/*   Updated: 2021/10/08 16:44:39 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void swap_positions (char *current_pos, char *next_pos, char current_value, char next_value)
{
    *current_pos = next_value;
    *next_pos = current_value;
}

static void handle_space(t_game *game, int x, int y)
{
    int i;
    int j;

    i = game->x;
    j = game->y;
    swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
    game->moves++;
    game->x = x;
    game->y = y;
}

static void handle_collectibles(t_game *game, int x, int y)
{
    int i;
    int j;

    i = game->x;
    j = game->y;
    swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
    game->collected++;
    game->moves++;
    game->x = x;
    game->y = y;
}

static void handle_exit(t_game *game, int x, int y)
{
    int i;
    int j;

    i = game->x;
    j = game->y;
    if (game->collected == game->collectibles)
    {
        swap_positions(&game->map[i][j], &game->map[x][y], 'E', '0');
        game->moves++;
        game->end_game = 1;
        game->x = x;
        game->y = y;
    }
}

void handle_situation(t_game *game, int x, int y)
{
    if (game->map[x][y] != '1')
    {
        if (game->map[x][y] == '0')
            handle_space(game, x, y);
        if (game->map[x][y] == 'C')
            handle_collectibles(game, x, y);
        if (game->map[x][y] == 'E')
            handle_exit(game, x, y);
    }
}


