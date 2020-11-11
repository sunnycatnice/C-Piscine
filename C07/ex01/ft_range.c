/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:17:10 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/11 14:26:39 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int diff;
	int *ptr;
	int i;

	diff = max - min;
	i = 0;
	if (min < max)
	{
		if (!(ptr = malloc(diff * sizeof(int))))
			return (0);
		while (min < max)
		{
			ptr[i++] = min;
			min++;
		}
		return (ptr);
	}
	return (ptr = 0);
}
