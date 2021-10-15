/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:31:15 by azamario          #+#    #+#             */
/*   Updated: 2021/10/14 16:39:49 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_image(t_game *game, void *image, int x, int y)
{
	mlx_put_image_to_window(game->mlx,
		game->window_ptr, image, y * SPRITE_SIZE, x * SPRITE_SIZE);
}
