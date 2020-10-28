/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 16:14:31 by dmangola          #+#    #+#             */
/*   Updated: 2020/10/27 16:18:03 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_num(int n)
{
	n = n + 48;
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 99)
	{
		while (a <= 98)
		{
			b = a + 1;
			while (b <= 99)
			{
				ft_put_num(a / 10);
				ft_put_num(a % 10);
				write(1, " ", 1);
				ft_put_num(b / 10);
				ft_put_num(b % 10);
				if (a != 98 || b != 99)
				{
					write(1, ", ", 2);
				}
				b++;
			}
			a++;
		}
	}
}