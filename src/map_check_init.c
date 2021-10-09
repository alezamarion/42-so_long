/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 22:17:32 by azamario          #+#    #+#             */
/*   Updated: 2021/10/08 22:21:12 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    map_check_init(t_map *map)
{
    map->collectible = 0;
    map->exit = 0;
    map->player = 0;
    map->map_row_size = 0;
    map->map_col_size = 0;
}
