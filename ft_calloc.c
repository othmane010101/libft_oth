/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:10:39 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/20 10:42:55 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	arr = (unsigned char *)malloc(size * nmemb);
	if (!arr)
		return (NULL);
	ft_bzero(arr, size * nmemb);
	return (arr);
}
/*
#include <stdio.h>

int main()
{

    void *p1= ft_calloc(5,0);
    printf ("%p\n", p1);
    int *c;

    
    printf ("%d\n", c[0]);
    c = ft_calloc(10,sizeof(int));
    //printf ("%s\n", c);
    int i=0;
    while (i<10)
    {
        printf("c[%d]= %d \n",i,c[i]);
        i++;
    }
    //printf ("\"%s\"\n", c);
    
    
    
    printf("%d\n",c[0]);
    printf("%d\n",c[1]);
    printf("%d\n",c[2]);
    printf("%d\n",c[3]);
    printf("%d\n",c[4]);
    printf("%d\n",c[5]);
    printf("%d\n",c[6]);
    c[0]= 1;
    printf("%d\n",c[0]);
    
    free(p1);
    return (0);  
}
*/
