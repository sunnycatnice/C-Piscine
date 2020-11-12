/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinamet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 10:34:20 by asinamet          #+#    #+#             */
/*   Updated: 2020/11/12 11:47:39 by asinamet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "tools.h"
#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_map_display(int **map, t_map_params *params)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = -1;
	if (!(str = malloc(sizeof(*str) * params->columns)))
		return ;
	while (++i < params->lines)
	{
		k = 0;
		j = -1;
		while (++j < params->columns - 1)
		{
			if (map[i][j] == -1)
				str[k++] = params->fill;
			else if (map[i][j] == 0)
				str[k++] = params->obstacles;
			else
				str[k++] = params->empty;
		}
		str[k++] = '\n';
		str[k] = '\0';
		ft_putstr(str);
	}
}

int		main(int ac, char **av)
{
	int				i;
	int				fd;
	int				**map;
	char			*grid;
	t_map_params	params;

	i = 1;
	fd = 0;
	while (i < ac)
	{
		if ((fd = open(av[i++], O_RDONLY)) == -1)
			ft_map_error();
		if (fd != -1)
		{
			if ((grid = ft_read_file(fd, &params))
					&& (map = ft_map_converter(grid, &params)))
				ft_map_display(ft_square_calc(map, params), &params);
			else
				ft_map_error();
		}
		write(1, "\n", 1);
	}
	return (0);
}
