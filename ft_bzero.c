/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:14:37 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/19 13:57:04 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
    char tab[10] = {'1','2','3','4','5','6'};
    int i=0;
     for(i=0;i<10;i++)
        printf("%c\n",tab[i]);
    ft_bzero(tab,sizeof(char) * 10);
    for(i=0;i<10;i++)
        printf("%d",tab[i]);
    return 0;
}
    */
