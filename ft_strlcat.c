/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:15:41 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/15 10:28:27 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_s;
	size_t	src_s;
	size_t	i;

	i = 0;
	dst_s = ft_strlen(dst);
	if (!src)
		return (dst_s);
	src_s = ft_strlen(src);
	if (size <= 0)
		return (src_s);
	if (size <= dst_s)
		return (size + src_s);
	while ((dst_s + i < size - 1) && src[i])
	{
		dst[dst_s + i] = src[i];
		i++;
	}
	dst[dst_s + i] = '\0';
	return (dst_s + src_s);
}
/*int main()
 {
    int i;
    char arr[100] = "why you are smart";
    printf("%u\n", strlcat(arr, "HELLO MUTHER FUCKER", -1));
    //printf("%zu", strlcat(arr, "HELLO MUTHER FUCKER", -1));
     char    s[10] = " othmane ";
     char    d[20] = "errachidi";
     int j;
     //printf("libft: %zu \n",ft_strlcat(d,s,sizeof(char)*20));
     i = 0;
     while (d[i])
     {
         printf("%c",d[i]);
         i++;
     }
     return (0);
 }
*/
