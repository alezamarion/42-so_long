/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:38:21 by azamario          #+#    #+#             */
/*   Updated: 2021/10/14 20:21:18 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*
char    **read_map(char *path_to_file)
{
    int		fd;
    char	*buffer;
	char	*line;
	char	**map;

    fd = open(path_to_file, O_RDONLY);
    if (fd == -1)
    {
        ft_putstr_fd("O mapa nao pode ser lido", fd);
        return (NULL);
    }
    buffer = ft_strdup("");
	while(ft_get_next_line(fd, &line))
	{
		buffer = ft_strjoin(buffer, line);
		buffer = ft_strjoin(buffer, "\n");
		ft_super_free((void *)&line);
	}
	buffer = ft_strjoin(buffer, line);
	map = ft_split(buffer, '\n');
	ft_super_free((void *)&buffer);
	ft_super_free((void *)&line);

	close(fd);

	return(map);
}
*/

char	**read_map(char *path_to_file)
{
	int		fd;
	char	*line;
	char	*buffer;
	char	*tmp;
	char	**map;

	fd = open(path_to_file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buffer = ft_strdup("");
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		tmp = buffer;
		buffer = ft_strjoin(tmp, line);
		ft_super_free((void *)&tmp);
		ft_super_free((void *)&line);
	}
	map = ft_split(buffer, '\n');
	ft_super_free((void *)&buffer);
	close(fd);
	return (map);
}