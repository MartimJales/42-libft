/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:37:16 by mjales            #+#    #+#             */
/*   Updated: 2021/12/04 11:37:17 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

//I HAVE A BUG IN STRING_NUMBER, RETHINK IN THAT SHIT

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	next_pos(char const *s, int c)
{
	size_t	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (i);
	return (i);
}

size_t	string_number(char const *s, int c)
{
	size_t	i;
	size_t	num;
	size_t	flag;

	flag = 0;
	i = -1;
	num = 0;
	if (!c)
		return (1);
	while (s[++i])
	{
		if (s[i] == c)
		{
			if (!flag)
				num++;
			flag = 1;
		}
		else
			flag = 0;
	}
	if (s[i] == c)
		return (1);
	if (s[0] == c || s[i - 1] == c)
		num--;
	printf("str_num: %ld\n", num);
	return (num);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

static int	find_char(int c, char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (s[i] == c);
}

//Allocates (with malloc(3)) and returns an array
//of strings obtained by splitting ’s’ using the
//character ’c’ as a delimiter. The array must be
//ended by a NULL pointer.
char	**ft_split(char const *s, char c)
{
	size_t	num;
	size_t	i;
	size_t	len;
	char	**arr;

	num = string_number(s, c);
	arr = malloc(sizeof(char *) * (num + 1));
	i = -1;
	printf("num: %ld\n\n", num);
	while (++i < num)
	{
		while (*s == c)
			s++;
		//printf("===(%ld)===\n", i);
		//printf("loop: |%s|\n", s);
		len = next_pos(s, c);
		//printf("len: |%ld|\n", len);
		arr[i] = malloc(len + 1);
		ft_strlcpy(arr[i], s, len + 1);
		s = s + len + 1;
	}
	arr[i] = malloc(1);
	arr[i] = NULL;
	return (arr);
}

int	main(void)
{
	char	**tab;
	size_t	i;

	tab = ft_split("  tripouille  xx  ", ' ');
	i = -1;
	while (tab[++i])
		printf("stab[%ld]: |%s|\n", i, tab[i]);
	printf("tab[%ld]: |%s|\n", i, tab[i]);
}
