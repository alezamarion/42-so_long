/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:08:08 by azamario          #+#    #+#             */
/*   Updated: 2021/10/08 15:12:04 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    map_counter(char **map, t_game *game)
{
    int i;

    i = 0;
    game->window_height = 0;
    while(map[i])
    {
        game->window_height++;
        i++;
    }
    game->window_width = ft_strlen(*map);
}

void print_map (char **map)
{
    int i;
    i = 0;
    printf("\n------------- Mapa: ------------\n");
    while (map[i])
    {
        printf("%s\n", map[i]);
        i++;
    }
    printf("\n");
}

void    count_collectibles(char **map, t_game *game)
{
    int i;
    int j;

    i = 0;
    while(map[i])
    {
        j = 0;
        while(map[i][j])
        {
            if(map[i][j] == 'C')
                game->collectibles++;
            j++;
        }
        i++;
    }
}
