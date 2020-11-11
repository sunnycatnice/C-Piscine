/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lookforobs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:22:49 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/10 16:26:25 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lookforobs(int board[lr][lc], int *r, int *c) //limit row, limit colomn (lr,lc)
{
	*r = 0;
	*c = 0;
	while (*r < 4)
	{
		*c = 0;
		while (*c < 4)
		{
			if (board[*r][*c] == 0) //sostituire 0 con obstacle
				return (1); //returna 1 come funzione di controllo "lookfor..."
			*c += 1;
		}
		*r += 1;
	}
	return (0);
}
