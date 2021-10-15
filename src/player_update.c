/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_update.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:33:27 by azamario          #+#    #+#             */
/*   Updated: 2021/10/15 08:15:00 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	player_update(int keycode, t_game *game)
{
	if (keycode == KEY_W || keycode == KEY_UP)
	{
		handle_situation(game, game->x - 1, game->y);
		game->player_direction = 'u';
	}
	if (keycode == KEY_S || keycode == KEY_DOWN)
	{
		handle_situation(game, game->x + 1, game->y);
		game->player_direction = 'd';
	}
	if (keycode == KEY_A || keycode == KEY_LEFT)
	{
		handle_situation(game, game->x, game->y - 1);
		game->player_direction = 'l';
	}
	if (keycode == KEY_D || keycode == KEY_RIGHT)
	{
		handle_situation(game, game->x, game->y + 1);
		game->player_direction = 'r';
	}
}
