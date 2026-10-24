/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:32:15 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/15 13:41:21 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(&s[i]));
		i++;
	}
	if (s[i] == c)
		return ((char *)(&s[i]));
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	printf("%s",ft_strchr("othmane errachidi",'e'));
return (0);
}*/
