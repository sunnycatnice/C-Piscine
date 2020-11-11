/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initboard.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:39:37 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/10 16:32:46 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		initboard(int *input, lr, lc) //limit row, limit colomn (lr, lc)
{
	int		rig;
	int		col;
	int		board[lr][lc];

	rig = 0;
	col = 0;
	while (rig < lr)
	{
		col = 0;
		while (col < lc)
		{
			board[rig][col] = 0; // sostituire 0 con read(ft.. sti cazzi e il resto
			col++;
		}
		rig++;
	}
	/*
	lookfor1(board, input);
	lookfor4_0(board, input);
	if ((doyourstuff(board, input)) == 1)
		stampa(board);
	else
		write(1, "\nERR - No Solution\n\n", 20);
	return (0);
	*/
}
