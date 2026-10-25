/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:03:12 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/15 11:21:26 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	if (!src)
		return (0);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
 #include <stdio.h>
 int main()
 {
    int     i;
    char    s[10] = "othmane";
    char    d[10] = "errachidi";
    int j;
	int s1 = strlcpy(d,s,20);
    printf("libft: %d \n",ft_strlcpy(d,s,sizeof(char)*20));
    printf("Origin: %d \n", s1);
    i = 0;
    while (i < 10)
    {
        printf("%c",d[i]);
        i++;
    }
    
    return (0);
 }
*/
