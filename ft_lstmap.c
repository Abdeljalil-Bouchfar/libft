/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:08:32 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/07 18:37:33 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_head;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&lst_head, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_head, new_node);
		lst = lst->next;
	}
	return (lst_head);
}
