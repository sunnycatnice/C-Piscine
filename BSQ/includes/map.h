/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinamet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:36:06 by asinamet          #+#    #+#             */
/*   Updated: 2020/11/12 11:25:06 by asinamet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct	s_map_params
{
	int		lines;
	int		columns;
	int		size;
	char	empty;
	char	obstacles;
	char	fill;
}				t_map_params;

typedef struct	s_map_loc
{
	int x;
	int y;
	int point;
}				t_map_loc;

#endif
