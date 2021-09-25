/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:08:08 by azamario          #+#    #+#             */
/*   Updated: 2021/09/25 16:17:30 by azamario         ###   ########.fr       */
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
    printf("Altura do Mapa: %d\n", game->window_height);
    printf("Largura do Mapa: %d\n", game->window_width);
}
