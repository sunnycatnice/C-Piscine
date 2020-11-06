/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:33:14 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/06 14:47:06 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putdigit(int c)
{
	c += 48;
	write(1, &c, 1);
}

int main()
{
	int i;

	i = 9;
	while(i >= 0)
	{
		ft_putdigit(i);
		i--;
	}
	ft_putchar('\n');
}
