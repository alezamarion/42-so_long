/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:29:59 by azamario          #+#    #+#             */
/*   Updated: 2021/10/13 17:40:54 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int key_press(int keycode, t_game *game)
{
    if (keycode == XK_Escape)
        exit_game(game);
    if(game->end_game)
        return(0);
    player_update(keycode, game);
    map_render(game->map, game);
    show_info(game);
    return (0);
}