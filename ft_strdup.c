/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:00:57 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/24 12:05:07 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*c;
	int		s_len;
	int		i;

	s_len = ft_strlen(s) + 1;
	c = (char *)malloc(sizeof(char) * s_len);
	if (!c)
		return (NULL);
	i = 0;
	while (i < s_len - 1)
	{
		c[i] = s[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
/*
#include <stdio.h>

int main()
{
	char	*c = "othmane ";
	char	*s;
	char	*c1 = "errachidi";
	char	*s1;

	s = ft_strdup(c);
	s1 = ft_strdup(c1);
	printf("%s",s);
	printf("%s",s1);
	free (s);
	free (s1);
	return (0);
}
*/
