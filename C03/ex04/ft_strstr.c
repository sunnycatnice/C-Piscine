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
	int	i;
	int	x;
	int	find_size;

	i = 0;
	x = 0;
	find_size = 0;
	while (to_find[find_size] != '\0')
		find_size++;
	if (find_size == 0)
		return (str);
	while (str[x] != '\0' && to_find[x] <= find_size)
	{
		while (to_find[x] == str[i + x])
		{
			if (x == find_size - 1)
				return (str + i);
			x++;
		}
		x = 0;
		i++;
	}
	return (0);
}
