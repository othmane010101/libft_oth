/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:03:59 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/19 14:07:18 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == c)
			return ((char *)(&s[s_len]));
		s_len--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
printf("%s", ft_strrchr("Othmane errachidi",'r'));
return (0);
}
*/
