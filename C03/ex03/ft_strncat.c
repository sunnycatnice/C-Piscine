/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:53:19 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/06 12:04:30 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lenstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	ll_dest;

	i = 0;
	ll_dest = ft_lenstr(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[ll_dest] = src[i];
		i++;
		ll_dest++;
	}
	dest[ll_dest] = '\0';
	return (dest);
}
