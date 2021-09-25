/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_render.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:49:17 by azamario          #+#    #+#             */
/*   Updated: 2021/09/25 19:15:15 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    map_render(char **map, t_game *game)
{
    int i;
    int j;

    i = 0;
    while(map[i])
    {
        j = 0;
        while(map[i][j])
        {
            if(map[i][j] == '0')
            {
                draw_image(game, game->empty_space, i, j);
            }
            // if(map[i][j] == '1')
            // {
            //     draw_image(game, game->wall, i, j);
            // }
            // if(map[i][j] == 'P')
            // {
            //     draw_image(game, game->player, i, j);
            // }
            // if(map[i][j] == 'E')
            // {
            //     draw_image(game, game->exit, i, j);
            // }
            // if(map[i][j] == 'C')
            // {
            //     draw_image(game, game->collectible, i, j);
            // }
            j++;
        }
        i++;
    }
}