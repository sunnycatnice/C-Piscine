/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:49:46 by dmangola          #+#    #+#             */
/*   Updated: 2020/10/28 15:55:02 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char c[])
{
	int i;

	i = 0;
	while (c[i] != 0)
		i++;
	return (i);
}
