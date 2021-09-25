/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:33:04 by azamario          #+#    #+#             */
/*   Updated: 2021/09/25 16:16:51 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
# include "../libraries/mlx_linux/mlx.h"
# include "../libraries/libft/libft.h"
# include <math.h>
# define XK_MISCELLANY
# include <X11/keysymdef.h>
# include <X11/X.h>
# include <fcntl.h>

typedef struct s_game
{
    void *img;
    void *mlx;
    int window_width;
    int window_height;
}t_game; 


char    **read_map(char *path_to_file);
void    print_map(char **map);

//map_utils
void    map_counter(char **map, t_game *game);
void    init_game(t_game *game);


#endif
