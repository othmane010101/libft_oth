/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:04:07 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/25 20:03:06 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

#include <stdio.h>
int main()
{
    int tab[4];
	int test  = 1337;
	ft_memset((void*)tab,1337,sizeof(int) * 4);
	printf("%d",tab[0]);
    // int i=0;
    // ft_memset((void*)tab,'1',sizeof(char));
	// ft_memset((void*)tab+1,'3' + 256,sizeof(char));
	// ft_memset((void*)tab+2,51,sizeof(char));
	// ft_memset((void*)tab+3,55,sizeof(char));

        // printf("%d",(int)tab[0]);
    return 0;
}
