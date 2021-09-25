/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:31:15 by azamario          #+#    #+#             */
/*   Updated: 2021/09/25 18:43:08 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//essa funcao vai colocar a imagem na tela

void    draw_image(t_game *game, void *image, int x, int y)
{
    mlx_put_image_to_window(game->mlx, game->window, image, y * SPRITE_SIZE, x * SPRITE_SIZE);
    
    //int		mlx_put_image_to_window(void *mlx_ptr, void *win_ptr, void *img_ptr, int x, int y);
}



