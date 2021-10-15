/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:32:03 by azamario          #+#    #+#             */
/*   Updated: 2021/10/15 10:46:58 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*convert_image(char *image, t_game *game)
{
	game->img = mlx_xpm_file_to_image
		(game->mlx, image, &game->image_width, &game->image_height);
	return (game->img);
}

void	initialize_image(t_game *game)
{
	game->wall = convert_image(FILE_WALL, game);
	game->empty_space = convert_image(FILE_EMPTY, game);
	game->collectible = convert_image(FILE_COLLECTIBLE, game);
	game->exit = convert_image(FILE_EXIT, game);
	game->player_u = convert_image(FILE_PLAYER_U, game);
	game->player_d = convert_image(FILE_PLAYER_D, game);
	game->player_l = convert_image(FILE_PLAYER_L, game);
	game->player_r = convert_image(FILE_PLAYER_R, game);
}
