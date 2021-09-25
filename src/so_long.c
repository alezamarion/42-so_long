/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:43:47 by azamario          #+#    #+#             */
/*   Updated: 2021/09/25 19:09:10 by azamario         ###   ########.fr       */
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

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        t_game  game;

        game.mlx = mlx_init();

        game.map = read_map(argv[1]);
        map_counter(game.map, &game);
        init_window(&game);
        print_map(game.map); 

        initialize_image(&game);
        map_render(game.map, &game);
      
        mlx_loop(game.mlx);
    }

/*
    void    *mlx_ptr;
    void    *win_ptr;
  
    mlx_ptr = mlx_init();
    win_ptr = mlx_new_window(mlx_ptr, 700, 700, "Testing stuff");
    mlx_loop(mlx_ptr);

    valgrind --tool=memcheck --leak-check=full --show-reachable=yes ./so_long
*/

}
