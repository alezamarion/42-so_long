/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 22:01:47 by azamario          #+#    #+#             */
/*   Updated: 2021/10/15 11:19:21 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_valid_map(char **map, char *file)
{
	t_map	valid_map;

	if (!map)
		return (0);
	map_check_init(&valid_map);
	if (has_valid_walls(map, &valid_map) && has_valid_chars(map)
		&& has_minimum_chars(map, &valid_map) && is_rectangular(map)
		&& has_valid_extension(file))
		return (1);
	return (0);
}
