/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 21:38:21 by azamario          #+#    #+#             */
/*   Updated: 2021/09/25 16:16:52 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
