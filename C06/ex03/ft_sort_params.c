/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:04:36 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/11 12:06:09 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	swap(char **p1, char **p2)
{
	char *temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s2[i] != '\0' && s1[i] == '\0') || (s1[i] != '\0' && s2[i] == '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

void	print_params(int argc, char *argv[])
{
	int index;
	int subindex;

	index = 1;
	while (index < argc)
	{
		subindex = 0;
		while (argv[index][subindex] != '\0')
		{
			ft_putchar(argv[index][subindex]);
			subindex++;
		}
		ft_putchar('\n');
		index++;
	}
}

int		main(int argc, char *argv[])
{
	int counter;

	counter = 1;
	while (counter < argc - 1)
	{
		if (ft_strcmp(argv[counter + 1], argv[counter]) < 0)
		{
			swap(&argv[counter], &argv[counter + 1]);
			counter = 1;
		}
		else
			counter++;
	}
	print_params(argc, argv);
	return (0);
}
