/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asinamet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:37:57 by asinamet          #+#    #+#             */
/*   Updated: 2020/11/12 11:37:59 by asinamet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int		ft_atoi(char *str)
{
	int		i;
	int		res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		i++;
	if (!(str[i] <= '9' && str[i] >= '0'))
		return (0);
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
