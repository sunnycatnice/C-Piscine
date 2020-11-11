/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:17:51 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/11 14:27:00 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int diff;
	int i;

	diff = max - min;
	i = 0;
	if (!(min < max))
	{
		*range = 0;
		return (0);
	}
	if (!(*range = malloc(diff * sizeof(int))))
		return (0);
	if (!*range)
		return (-1);
	while (min < max)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (diff);
}
