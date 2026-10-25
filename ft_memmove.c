/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 21:20:29 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/19 14:06:23 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (d > s && d < s + n)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
    int    src[10] = {'a','s','q','w','e','d','w','m','e','w'};
    int    dest[10] = {'a','s','q','w','e','d','w','m','e','w'};
    int     i = 0;
    
    ft_memmove(src + 2, src, 3*4 );
    
    for(i = 0; i < 10; i++)
        printf("%c", src[i]);
    
    printf("\n");
    return (0);
}
*/
