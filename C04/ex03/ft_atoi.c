/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:02:42 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/05 19:41:04 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int segno;
	int res;

	i = 0;
	segno = 1;
	res = 0;
	while (str[i] >= 0 && str[i] <= 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			segno = segno * (-1);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	return (res * segno);
}
