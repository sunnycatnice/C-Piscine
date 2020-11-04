/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:40:42 by fbasso            #+#    #+#             */
/*   Updated: 2020/10/25 10:30:17 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_firstline(int x)
{
	int a;

	a = 1;
	while (a <= x)
	{
		if (a == 1)
			ft_putchar('A');
		if ((a > 1) && (a != x))
			ft_putchar('B');
		if ((a == x) && (a != 1))
			ft_putchar('A');
		a++;
	}
	ft_putchar('\n');
}

void	ft_lastline(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = y;
	while (a <= x)
	{
		if (a == 1)
			ft_putchar('C');
		if ((a > 1) && (a != x))
			ft_putchar('B');
		if ((a == x) && (b == y) && (a != 1))
			ft_putchar('C');
		a++;
	}
}

void	ft_middlelines(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('B');
		if ((i > 1) && (i != x))
			ft_putchar(' ');
		if ((i == x) && (i != 1))
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	if (y > 0 && x > 0)
	{
		if (y >= 1)
		{
			ft_firstline(x);
			if (y > 2)
			{
				while (i < y - 1)
				{
					ft_middlelines(x, y);
					i++;
				}
				ft_lastline(x, y);
				ft_putchar('\n');
			}
			if (y == 2)
			{
				ft_lastline(x, y);
				ft_putchar('\n');
			}
		}
	}
}
