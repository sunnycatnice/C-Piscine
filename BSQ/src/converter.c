/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinamet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:22:04 by asinamet          #+#    #+#             */
/*   Updated: 2020/11/12 11:33:26 by asinamet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include <stdlib.h>

int		**ft_map_converter(char *grid, t_map_params *map)
{
	int j;
	int k;
	int **data;

	j = -1;
	k = 0;
	if (!(data = (int**)malloc(sizeof(*data) * map->lines)) ||
			!(data[++j] = (int*)malloc(sizeof(**data) * map->columns)))
		return (0);
	while (*grid != '\0')
	{
		if (*grid == '\n')
		{
			if (((k != map->columns - 1)) ||
					!(data[++j] = (int*)malloc(sizeof(**data) * map->columns)))
				return (0);
			k = 0;
		}
		if (*grid == map->empty)
			data[j][k++] = -1;
		if (*grid++ == map->obstacles)
			data[j][k++] = 0;
	}
	return (j != map->lines - 1 ? 0 : data);
}
