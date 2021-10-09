/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:33:04 by azamario          #+#    #+#             */
/*   Updated: 2021/10/09 16:22:15 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include "../libraries/mlx_linux/mlx.h"
# include "../libraries/libft/libft.h"

# define XK_MISCELLANY
# include <X11/keysymdef.h>
# include <X11/X.h>

# define SPRITE_SIZE 32

# define FILE_WALL "textures/1.xpm"
# define FILE_EMPTY "textures/0.xpm"
# define FILE_COLLECTIBLE "textures/C.xpm"
# define FILE_EXIT "textures/E.xpm"
# define FILE_PLAYER_U "textures/P_U.xpm"
# define FILE_PLAYER_D "textures/P_D.xpm"
# define FILE_PLAYER_L "textures/P_L.xpm"
# define FILE_PLAYER_R "textures/P_R.xpm"

# define X_EVENT_KEY_PRESS 2
# define X_EVENT_DESTROY_NOTIFY 17
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
    int     collectibles;
    int     collected;
    int     end_game;
    void    *player_r;
    void    *player_l;
    void    *player_u;
    void    *player_d;
    int     player_direction;   
}t_game; 

typedef struct s_map
{
    int map_row_size;
    int map_col_size;
    int player;
    int exit;
    int collectible;    
}t_map;


char        **read_map(char *path_to_file);

//validate_map
int         is_valid_map(char **map, char *file);
void        map_check_init(t_map *map);
int         has_valid_walls(char **map, t_map *m);
int         has_valid_chars(char **map);
int         has_minimum_chars(char **map, t_map *valid_map);
int         is_rectangular(char **map);
int         has_valid_extension(char *file);


//init_game
void        init_game(t_game *game);
void        map_counter(char **map, t_game *game);
void        count_collectibles(char **map, t_game *game);
void        init_window(t_game *game);
void        initialize_image(t_game *game);
void        *convert_image(char *image, t_game *game);
void        map_render(char **map, t_game *game);

//event_handler
void        event_handler(t_game *game);
int         key_press(int keycode, t_game *game);
void        free_map(char **map);
int         exit_game(t_game *game);
void        player_update(int keycode, t_game *game);
void        swap_positions (char *current_pos, char *next_pos, char current_value, char next_value);
void        handle_situation(t_game *game, int x, int y);
void        draw_image(t_game *game, void *image, int x, int y);
void        hook_player(t_game *game, int i, int j);
void        show_info(t_game *game);
void        print_map(char **map);

#endif
