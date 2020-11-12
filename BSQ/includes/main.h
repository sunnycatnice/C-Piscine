/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinamet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:45:24 by asinamet          #+#    #+#             */
/*   Updated: 2020/11/12 11:24:09 by asinamet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

char	*ft_read_file(int fd, t_map_params *params);
int		**ft_map_converter(char *grid, t_map_params *params);
int		**ft_square_calc(int **map, t_map_params map_params);

#endif
