/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:18:19 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/04 13:27:44 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*i1;
	char	*i2;

	if (!*to_find)
		return (str);
	while (*str)
	{
		i1 = str;
		i2 = to_find;
		while (*i2 && *i1 == *i2)
		{
			i1++;
			i2++;
		}
		if (*i2 == 0)
			return (str);
		++str;
	}
	return (0);
}
