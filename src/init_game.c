/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:46:25 by azamario          #+#    #+#             */
/*   Updated: 2021/10/15 10:45:04 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	initialize_mlx(t_game *game)
{
	game->mlx = mlx_init();
}

static void	initialize_data(t_game *game)
{
	map_counter(game->map, game);
	count_collectibles(game->map, game);
	game->moves = 0;
	game->collected = 0;
	game->end_game = 0;
	game->player_direction = 'r';
}

static void	initialize_rendering(t_game *game)
{
	init_window(game);
	initialize_image(game);
	map_render(game->map, game);
}

void	init_game(t_game *game)
{
	initialize_mlx(game);
	initialize_data(game);
	initialize_rendering(game);
}
