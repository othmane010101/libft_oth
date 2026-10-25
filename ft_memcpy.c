/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 19:59:22 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/15 11:00:01 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
    char    src[10] = {'a','s','q','w','e','d','w','m','e','w'};
    char    dest[10] = {'a','s','q','w','e','d','w','m','e','w'};
    int i=0;
    ft_memcpy(src+2,src,sizeof(char) * 5);
    for(i=0;i<10;i++)
        printf("%c",src[i]);
    return 0;
}
*/