/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 21:34:19 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/24 20:00:32 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_s;
	size_t	s2_s;

	if (!s1 || !s2)
		return (NULL);
	s1_s = ft_strlen(s1);
	s2_s = ft_strlen(s2);
	ptr = malloc((s1_s + s2_s + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, s1_s + 1);
	ft_strlcat(ptr, s2, (s1_s + s2_s + 1));
	return (ptr);
}
/*
#include <stdio.h>

int main()
{
    char    *c1 = "othmane   java men ";
    char    *ptr = ft_strjoin(c1,"o");
    
    printf("%s",ptr);
    free(ptr);
    return (0);
}
*/