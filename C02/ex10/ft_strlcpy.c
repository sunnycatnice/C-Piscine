/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:19:47 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/04 16:35:01 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				lenstr(char *c)
{
	int	i;

	i = 0;
	while (*(c + i) != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dst, char *src, size_t dst_size)
{
	unsigned int	src_len;
	unsigned int	c;

	c = 0;
	src_len = lenstr(src);
	if ((src_len + 1) < dst_size)
	{
		while (c < src_len + 1)
		{
			*(dst + c) = *(src + c);
			c++;
		}
	}
	else if (dst_size != 0)
	{
		while (c < dst_size - 1)
		{
			*(dst + c) = *(src + c);
			c++;
		}
		*(dst + c) = '\0';
	}
	return (src_len);
}
