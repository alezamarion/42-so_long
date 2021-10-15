/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:43:47 by azamario          #+#    #+#             */
/*   Updated: 2021/10/15 11:12:21 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc == 2)
	{
		game.map = read_map(argv[1]);
		if (is_valid_map(game.map, argv[1]))
		{
			init_game(&game);
			event_handler(&game);
			mlx_loop(game.mlx);
		}
		else
		{
			printf("Error\n This map is not valid!\n");
			free_map(game.map);
			exit (0);
		}
	}
	else
	{
		printf("No map specified");
		exit (0);
	}
}
