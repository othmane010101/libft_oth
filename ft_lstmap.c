/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerrachi <oerrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:43:31 by oerrachi          #+#    #+#             */
/*   Updated: 2026/10/24 14:43:46 by oerrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ls;
	t_list	*head;
	void	*content;

	if (!lst || !f)
		return (NULL);
	head = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		ls = ft_lstnew(content);
		if (!ls)
		{
			if (content)
				del(content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, ls);
		lst = lst->next;
	}
	return (head);
}
