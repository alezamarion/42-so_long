/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:33:04 by azamario          #+#    #+#             */
/*   Updated: 2021/09/28 21:25:01 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../libraries/mlx_linux/mlx.h"
#include "../libraries/libft/libft.h"
#include <math.h>
# define XK_MISCELLANY
#include <X11/keysymdef.h>
#include <X11/X.h>
#include <fcntl.h>

# define SPRITE_SIZE 32

# define FILE_WALL "textures/1.xpm"
# define FILE_EMPTY "textures/0.xpm"
# define FILE_COLLECTIBLE "textures/C.xpm"
# define FILE_EXIT "textures/E.xpm"
# define FILE_PLAYER "textures/P.xpm"

typedef struct s_game
{
    void    *img;
    void    *mlx;
    char    **map;
    void    *window_ptr;
    int     window_width;
    int     window_height;
    int     image_width;
    int     image_height;
    void    *wall;
    void    *empty_space;
    void    *collectible;
    void    *exit;
    void    *player;
    
}t_game; 


char    **read_map(char *path_to_file);
void    print_map(char **map);

//map_utils
void    map_counter(char **map, t_game *game);

void    init_window(t_game *game);

void    *convert_image(char *image, t_game *game);
void    initialize_image(t_game *game);

void    draw_image(t_game *game, void *image, int x, int y);

void    map_render(char **map, t_game *game);


#endif
