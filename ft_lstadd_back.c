/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:01:39 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/24 13:50:08 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ls;

	if (!new || !lst)
		return ;
	if ((*lst) == NULL)
	{
		(*lst) = new;
		(*lst)->next = NULL;
		return ;
	}
	ls = *lst;
	while ((*lst)->next != NULL)
		(*lst) = (*lst)->next;
	(*lst)->next = new;
	new->next = NULL;
	*lst = ls;
}
