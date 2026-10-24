/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:10:19 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/20 14:08:16 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **c, int k)
{
	int	i;

	i = 0;
	while (i <= k)
	{
		free(c[i]);
		i++;
	}
	free(c);
	return (NULL);
}

static int	ft_count_keyword(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] != '\0' && str[i] != c)
		{
			j++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (j);
}

static int	ft_fill_word(char **res, char const *s, int start, int len)
{
	res[0] = malloc(sizeof(char) * (len + 1));
	if (!res[0])
		return (0);
	ft_strlcpy(res[0], &s[start], len + 1);
	return (1);
}

static int	ft_fill_tab(char **res, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			if (!ft_fill_word(&res[k], s, j, i - j))
				return (k);
			k++;
		}
	}
	res[k] = NULL;
	return (-1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;
	int		fail;

	if (!s)
		return (NULL);
	words = ft_count_keyword(s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	fail = ft_fill_tab(res, s, c);
	if (fail >= 0)
	{
		ft_free(res, fail);
		return (NULL);
	}
	return (res);
}
/*
#include <stdio.h>

int main()
{
	char	*c = ",,,,,,othmane,errachidi,,,,mohamed,,,,,";
	char	s = ',';
	char	**str;
	int	i;

	i = 0;
	str = ft_split(c, s);
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	printf("%s\n", &str[0][0]);
	printf("%s\n", &(c[6]));
	printf("%s\n", (c+6));
	printf("%c\n", *(c+6));
	printf("%c", *(&(*(c+6))));
	ft_free(str, 2);
	return (0);
}
*/