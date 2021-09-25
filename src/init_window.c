/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:32:01 by azamario          #+#    #+#             */
/*   Updated: 2021/09/25 17:12:07 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    init_window(t_game *game)
{
    game->window_ptr = mlx_new_window(game->mlx, game->window_width * SPRITE_SIZE, game->window_height * SPRITE_SIZE, "so_long");
}