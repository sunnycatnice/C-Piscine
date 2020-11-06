/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:44:26 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/06 14:45:30 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc !=  2)
		ft_putchar('a');
	else
	{
		while (*argv[1] != '\0' && *argv[1] !=  'a')
			argv[1]++;
		if (*argv[1] != '\0')
			ft_putchar('a');
	}
	ft_putchar('\n');
	return (0);
}
