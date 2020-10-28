/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:18:19 by dmangola          #+#    #+#             */
/*   Updated: 2020/10/27 15:20:32 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int cont;
	int limit;

	cont = 48;
	limit = 57;
	while (cont <= limit)
	{
		ft_putchar(cont);
		cont = cont + 1;
	}
}
