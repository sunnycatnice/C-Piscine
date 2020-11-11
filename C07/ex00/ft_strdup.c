/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:16:32 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/11 14:16:43 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (!(ptr = malloc(sizeof(char) * i)))
		return (0);
	if (ptr)
	{
		i = 0;
		while (src[i])
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = 0;
		return (ptr);
	}
	else
		return (0);
}
