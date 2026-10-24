/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:27:42 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/15 20:43:26 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cst;
	size_t				i;

	cst = s;
	i = 0;
	while (i < n)
	{
		if (cst[i] == (unsigned char)c)
			return ((void *)(&cst[i]));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char    c[20] = "othmane-errachidi";
	char	*p;
    p = ft_memchr(c,'-', sizeof(char) * 20);
    printf("%s",p);
    return (0);
}
*/
