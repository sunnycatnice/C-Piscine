/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:19:22 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/11 14:28:11 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	len_final;
	int	i;

	len_final = 0;
	i = 0;
	while (i < size)
	{
		len_final += ft_str_length(strings[i]);
		len_final += sep_length;
		i++;
	}
	len_final -= sep_length;
	return (len_final);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*wstart;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = ft_compute_final_length(strs, size, ft_str_length(sep));
	if (!(string = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	wstart = string;
	i = 0;
	while (i < size)
	{
		ft_strcpy(wstart, strs[i]);
		wstart += ft_str_length(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(wstart, sep);
			wstart += ft_str_length(sep);
		}
		i++;
	}
	*wstart = '\0';
	return (string);
#include <stdlib.h>

int		check_char(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
		if (c == s[i++])
			return (0);
	return (1);
}

#include <stdlib.h>

int		check_char(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
		if (c == s[i++])
			return (0);
	return (1);
}

int		wordcount(char *str, char *charset)
{
	int i;
	int start;
	int words;

	i = 0;
	words = 0;
	start = 0;
	while (str[i])
	{
		if (check_char(charset, str[i]))
		{
			if (start == 0)
			{
				words++;
				start++;
			}
		}
		else if (!check_char(charset, str[i]) && start != 0)
			start = 0;
		i++;
	}
	return (words);
}

void	finder(char *str, char *charset, int *indexarr, int *lenghtarr)
{
	int k;
	int start;
	int i;

	k = 0;
	i = 0;
	while (str[i])
	{
		if (check_char(charset, str[i]) && start == 0)
		{
			indexarr[k] = i;
			lenghtarr[k] += 1;
			start = 1;
		}
		else if (check_char(charset, str[i]) && start != 0)
			lenghtarr[k] += 1;
		else if (!check_char(charset, str[i]) && start != 0)
		{
			start = 0;
			k++;
		}
		i++;
	}
}

char	**solver(char *str, int *lenghtarr, int *indexarr, int lenght)
{
	int		i;
	int		k;
	char	**newarr;
	int		n;

	newarr = (char**)malloc(sizeof(char*) * lenght + 1);
	i = 0;
	while (i < lenght)
	{
		k = 0;
		newarr[i] = (char*)malloc((sizeof(char) * lenghtarr[i]) + 1);
		while (k < lenghtarr[i])
		{
			n = indexarr[i] + k;
			newarr[i][k] = str[n];
			k++;
		}
		newarr[i][k] = '\0';
		i++;
	}
	newarr[i] = 0;
	return (newarr);
}

char	**ft_split(char *str, char *charset)
{
	int *indexarr;
	int *lenghtarr;
	int lenght;
	int i;

	i = 0;
	lenght = wordcount(str, charset);
	indexarr = malloc(sizeof(int*) * lenght);
	lenghtarr = malloc(sizeof(int*) * lenght);
	while (i < lenght)
	{
		indexarr[i] = 0;
		lenghtarr[i++] = 0;
	}
	i = 0;
	finder(str, charset, indexarr, lenghtarr);
	return (solver(str, lenghtarr, indexarr, lenght));
}
int		wordcount(char *str, char *charset)
{
	int i;
	int start;
	int words;

	i = 0;
	words = 0;
	start = 0;
	while (str[i])
	{
		if (check_char(charset, str[i]))
		{
			if (start == 0)
			{
				words++;
				start++;
			}
		}
		else if (!check_char(charset, str[i]) && start != 0)
			start = 0;
		i++;
	}
	return (words);
}

void	finder(char *str, char *charset, int *indexarr, int *lenghtarr)
{
	int k;
	int start;
	int i;

	k = 0;
	i = 0;
	while (str[i])
	{
		if (check_char(charset, str[i]) && start == 0)
		{
			indexarr[k] = i;
			lenghtarr[k] += 1;
			start = 1;
		}
		else if (check_char(charset, str[i]) && start != 0)
			lenghtarr[k] += 1;
		else if (!check_char(charset, str[i]) && start != 0)
		{
			start = 0;
			k++;
		}
		i++;
	}
}

char	**solver(char *str, int *lenghtarr, int *indexarr, int lenght)
{
	int		i;
	int		k;
	char	**newarr;
	int		n;

	newarr = (char**)malloc(sizeof(char*) * lenght + 1);
	i = 0;
	while (i < lenght)
	{
		k = 0;
		newarr[i] = (char*)malloc((sizeof(char) * lenghtarr[i]) + 1);
		while (k < lenghtarr[i])
		{
			n = indexarr[i] + k;
			newarr[i][k] = str[n];
			k++;
		}
		newarr[i][k] = '\0';
		i++;
	}
	newarr[i] = 0;
	return (newarr);
}

char	**ft_split(char *str, char *charset)
{
	int *indexarr;
	int *lenghtarr;
	int lenght;
	int i;

	i = 0;
	lenght = wordcount(str, charset);
	indexarr = malloc(sizeof(int*) * lenght);
	lenghtarr = malloc(sizeof(int*) * lenght);
	while (i < lenght)
	{
		indexarr[i] = 0;
		lenghtarr[i++] = 0;
	}
	i = 0;
	finder(str, charset, indexarr, lenghtarr);
	return (solver(str, lenghtarr, indexarr, lenght));
}
}
