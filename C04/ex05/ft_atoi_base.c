/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:59:37 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/07 17:01:51 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (*(c + i) != '\0')
	{
		i++;
	}
	return (i);
}

int	base_check(char *base)
{
	int	c1;
	int	c2;

	c1 = 0;
	if (ft_strlen(base) > 1)
	{
		while (base[c1] != '\0' && base[c1] != '-' && base[c1] != '+')
		{
			c2 = c1 + 1;
			while (base[c1] != base[c2] && base[c2] != '\0' && base[c1] != '\0')
			{
				c2++;
			}
			if (base[c2] != '\0')
				return (1);
			c1++;
		}
		if (base[c1] == '\0')
			return (0);
	}
	return (1);
}

int	base_op(char chk, char *base)
{
	int	c;

	c = 0;
	while (base[c] != '\0')
	{
		if (chk == base[c])
			return (c);
		c++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	n_p;
	int	b_len;

	b_len = ft_strlen(base);
	num = 0;
	n_p = 1;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	while (*str++ == '-' || *str == '+')
	{
		if (*str == '-')
			n_p *= -1;
	}
	if (!base_check(base))
	{
		while (base_op(*str, base) != -1)
		{
			num *= b_len;
			num += (int)(base_op(*str, base));
			str++;
		}
		return (num * n_p);
	}
	return (0);
}
