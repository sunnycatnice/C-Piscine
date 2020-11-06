/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:51:45 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/05 11:25:17 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	fc;
	int	lc;

	fc = 0;
	while (str[fc] != '\0')
	{
		if ((str[fc] > 96 && str[fc] < 123)
			|| (str[fc] > 64 && str[fc] < 91) || (str[fc] > 47 && str[fc] < 58))
		{
			lc = fc;
			while ((str[lc] > 96 && str[lc] < 123) || (str[lc] > 64
						&& str[lc] < 91) || (str[lc] > 47 && str[lc] < 58))
			{
				lc++;
				if (str[lc] > 64 && str[lc] < 91)
					str[lc] += 32;
			}
			if (str[fc] > 96 && str[fc] < 123)
				str[fc] -= 32;
			fc = lc - 1;
		}
		fc++;
	}
	return (str);
}
