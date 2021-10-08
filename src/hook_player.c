/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:49:36 by azamario          #+#    #+#             */
/*   Updated: 2021/10/08 16:50:55 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void hook_player(t_game *game, int i, int j)
{
    draw_image(game, game->player_r, i, j);
    if(game->player_direction == 'u')
        draw_image(game, game->player_u, i, j);
    if(game->player_direction == 'd')
        draw_image(game, game->player_d, i, j);
    if(game->player_direction == 'l')
        draw_image(game, game->player_l, i, j);
    if(game->player_direction == 'r')
        draw_image(game, game->player_r, i, j);
    game->x = i;
    game->y = j;
}