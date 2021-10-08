/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:46:25 by azamario          #+#    #+#             */
/*   Updated: 2021/10/08 17:28:04 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	initialize_mlx(t_game *game)
{
    game->mlx = mlx_init();
}

static void	initialize_data(t_game *game)
{
    map_counter(game->map, game);   //descobre altura e largura do mapa
	count_collectibles(game->map, game);
	game->moves = 0;
	game->collected = 0;
	game->end_game = 0;

}

static void	initialize_rendering(t_game *game)
{
    init_window(game);             //mlx_new_window
    initialize_image(game);        //mlx_xpm_file_to_image
    map_render(game->map, game);    //mlx_put_image_to_window
}

void	init_game(t_game *game)
{
	initialize_mlx(game);
	initialize_data(game);
	initialize_rendering(game);
}