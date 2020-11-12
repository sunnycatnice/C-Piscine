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

void	ft_putnbr(int nb)
{
	long nbr_long;

	nbr_long = nb;
	if (nbr_long < 0)
	{
		ft_putchar('-');
		nbr_long = -nbr_long;
	}
	if (nbr_long >= 10)
	{
		ft_putnbr(nbr_long / 10);
	}
	ft_putchar('0' + nbr_long % 10);
}
