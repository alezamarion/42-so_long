/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:24:58 by azamario          #+#    #+#             */
/*   Updated: 2021/10/14 17:43:23 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	event_handler(t_game *game)
{
	mlx_hook(game->window_ptr, X_EVENT_KEY_PRESS, 1l << 0, &key_press, game);
	mlx_hook(game->window_ptr, X_EVENT_DESTROY_NOTIFY, 0, &exit_game, game);
}
