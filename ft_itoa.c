/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:05:36 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/23 11:58:27 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static int	ft_intlen(long n)
{
	int		i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*c;
	int		len;
	int		s;

	nb = n;
	s = 0;
	len = ft_intlen(nb);
	c = malloc(sizeof(char) * len);
	if (!c)
		return (NULL);
	c[--len] = '\0';
	if (nb < 0)
	{
		c[0] = '-';
		s = 1;
		nb = -nb;
	}
	while (len > s)
	{
		c[len - 1] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (c);
}
/*
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%s\n", ft_itoa(0));
		printf("%s\n", ft_itoa(-1000));
		printf("%s\n", ft_itoa(0));
	return (0);
}
*/
