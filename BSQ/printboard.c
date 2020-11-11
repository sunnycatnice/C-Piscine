/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printboard.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:14:45 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/10 16:29:21 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printboard(int board[lr][lc]) //limit row, limit colomn (lr,lc)
{
	int	rig;
	int col;

	rig = 0;
	col = 0;
	while (rig < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(board[rig][col] + '0');
			(col == 3) ? col++ : ft_putchar(' '); // sostituire il 3 con ostacoli
			col++;
		}
		ft_putchar('\n');
		rig++;
	}
}
