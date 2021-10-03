/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:33:04 by azamario          #+#    #+#             */
/*   Updated: 2021/10/02 21:14:00 by azamario         ###   ########.fr       */
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

# define X_EVENT_KEY_PRESS 2
# define KEY_W 119
# define KEY_A 97
# define KEY_S 115 
# define KEY_D 100

# define KEY_UP 65362
# define KEY_LEFT 65361
# define KEY_DOWN 65364
# define KEY_RIGHT 65363


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
    int     moves;
    int     x;
    int     y;
    
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

int	key_hook(int keycode, t_game *game);

void    move_player(t_game *game, int x, int y);
void swap_positions (char *current_pos, char *next_pos, char current_value, char next_value);



#endif
