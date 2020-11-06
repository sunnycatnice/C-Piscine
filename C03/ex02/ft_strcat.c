/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:08:20 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/06 10:58:49 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lenstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	ll_dst;

	i = 0;
	ll_dst = ft_lenstr(dest);
	while (src[i] != '\0')
	{
		dest[ll_dst] = src[i];
		i++;
		ll_dst++;
	}
	dest[ll_dst] = '\0';
	return (dest);
}
