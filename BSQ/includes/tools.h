/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinamet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 16:21:51 by asinamet          #+#    #+#             */
/*   Updated: 2020/11/12 11:25:46 by asinamet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

char	*ft_strcat(char *dest, char *src);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, int n);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_map_error();

#endif
