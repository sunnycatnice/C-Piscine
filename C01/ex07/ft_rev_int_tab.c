/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:57:21 by dmangola          #+#    #+#             */
/*   Updated: 2020/10/28 16:29:39 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int cont;
	int revcont;
	int support;

	cont = 0;
	revcont = size - 1;
	while (cont <(size/2))
	{
		support = tab[cont];
		tab[cont] = tab[revcont];
		tab[revcont] = tab[cont];
		
		cont++;
		revcont--;
	}
}
