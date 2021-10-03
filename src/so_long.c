/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:43:47 by azamario          #+#    #+#             */
/*   Updated: 2021/10/02 19:35:34 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*
mlx_init() establish a connection to the correct graphical system and will return a void * 
    which holds the location of our current MLX instance.
In computer programming, the term hooking covers a range of techniques used to alter or augment the behaviour
    of an operating system, of applications, or of other software components by intercepting function calls or 
    messages or events passed between software components. Code that handles such intercepted function calls, 
    events or messages is called a hook.
Hooking is used for many purposes, including debugging and extending functionality. Examples might include 
    intercepting keyboard or mouse event messages before they reach an application, or intercepting operating 
    system calls in order to monitor behavior or modify the function of an application or another component. 
*/

void    game_init(t_game *game)
{
    game->img = 0;
    game->mlx = 0;
    game->map = 0;
    game->window_ptr = 0;
    game->window_width = 0;
    game->window_height = 0;
    game->image_width = 0;
    game->image_height = 0;
    game->wall = 0;
    game->empty_space = 0;
    game->collectible = 0;
    game->exit = 0;
    game->player = 0;
    game->moves = 0;
    game->x = 0;
    game->y = 0;    
}

void move_right(t_game *game)
{
    int i;
    int j;

    i = game->x;
    j = game->y + 1;
    printf("Dentro de move_right: %d, %d", i, j);
   // swap_positions(&game->map[i][j], &game->map[x][y], 'P', '0');
}




int main(int argc, char **argv)
{
    if (argc == 2)
    {
        t_game  game;

        game_init(&game);
        game.mlx = mlx_init();
        game.map = read_map(argv[1]);   //gnl   
        map_counter(game.map, &game);   //descobre altura e largura do mapa
        init_window(&game);             //mlx_new_window
 
        print_map(game.map); 

        initialize_image(&game);        //mlx_xpm_file_to_image
   
        map_render(game.map, &game);    //mlx_put_image_to_window

        mlx_key_hook(game.window_ptr, key_hook, &game);
        
        mlx_loop(game.mlx);
    }
}
