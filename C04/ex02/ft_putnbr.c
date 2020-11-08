/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:15:28 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/07 16:38:54 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	n_p(int n)
{
	if (n < 0)
	{
		n = (unsigned int)(n * -1);
		write(1, "-", 1);
	}
	return (n);
}

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int nb)
{
	unsigned int num;

	num = n_p(nb);
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar('0' + num % 10);
}
