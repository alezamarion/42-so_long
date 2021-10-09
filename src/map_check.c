/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 22:22:24 by azamario          #+#    #+#             */
/*   Updated: 2021/10/09 16:26:26 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int has_valid_walls(char **map, t_map *valid_map)
{
    int i;
    int j;

    while (map[valid_map->map_col_size])
        valid_map->map_col_size++;
    valid_map->map_col_size--;
    valid_map->map_row_size = ft_strlen(*map) - 1;
    i = 0;
    while (map[i])
    {
        j = 0;
        while(map[i][j])
        {
            if (map[0][i] != '1' ||
                map[i][0] != '1' || map[i][valid_map->map_row_size] != '1'
                || map[valid_map->map_col_size][j] != '1')
                    return (0);
            j++;
        } 
        i++;
    }
    return (1);  
}

int has_valid_chars(char **map)
{
    int i;
    int j;

    i = 0;
    while(map[i])
    {
        j = 0;
        while(map[i][j])
        {
            if (map[i][j] != '1' && map[i][j] != '0' && map[i][j] != 'P' 
            && map[i][j] != 'C' && map[i][j] != 'E')
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int has_minimum_chars(char **map, t_map *valid_map)
{
    int i;
    int j;

    i = 0;
    while(map[i])
    {
        j = 0;
        while(map[i][j])
        {
            if(map[i][j] == 'P')
                valid_map->player++;
            if(map[i][j] == 'C')
                valid_map->collectible++;
            if(map[i][j] == 'E')
                valid_map->exit++;
            if(valid_map->collectible > 0 && valid_map->exit > 0 
                && valid_map->player > 0)
            return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int is_rectangular(char **map)
{
    int i;
    size_t line_size;

    i = 0;
    line_size = ft_strlen(*map);
    while (map[++i])
        if (ft_strlen(map[i]) != line_size)
            return (0);
    return (1);
}

int has_valid_extension(char *file)
{
    char *extension;

    if (!file)
        return (0);
    extension = ft_strrchr(file, '.');
    if (ft_strncmp(extension, ".ber", 5))
        return (0);
    return (1);
}
