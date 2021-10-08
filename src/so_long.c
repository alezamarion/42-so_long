/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:43:47 by azamario          #+#    #+#             */
/*   Updated: 2021/10/08 17:40:49 by azamario         ###   ########.fr       */
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
    t_game  game;

    if (argc == 2)
    {
        game.map = read_map(argv[1]);   //gnl 

        init_game(&game);
        event_handler(&game);
        mlx_loop(game.mlx);
    }
}
