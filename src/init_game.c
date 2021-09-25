/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:59:24 by azamario          #+#    #+#             */
/*   Updated: 2021/09/25 16:16:53 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    init_game(t_game *game)
{
    game->img = 0;
    game->mlx = 0;
    game->window_height = 0;
    game->window_width = 0;
}
