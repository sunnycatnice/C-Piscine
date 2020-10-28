/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 10:59:43 by dmangola          #+#    #+#             */
/*   Updated: 2020/10/27 19:58:50 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_numbers(int a, int b, int c)
{
	a += 48;
	b += 48;
	c += 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_put_numbers(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					write(1, ", ", 2);
				}
				c = c + 1;
			}
			b = b + 1;
		}
		a = a + 1;
	}
}
