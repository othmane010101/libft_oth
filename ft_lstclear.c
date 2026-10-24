/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:23:31 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/23 09:16:33 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ls;
	t_list	*ls1;

	if (!lst || !del)
		return ;
	ls = *lst;
	ls1 = ls;
	*lst = NULL;
	while (ls1 != NULL)
	{
		ls = ls->next;
		del(ls1->content);
		free(ls1);
		ls1 = ls;
	}
}
