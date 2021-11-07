/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:21:26 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/07 18:39:17 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	temp;

	size = 1;
	if (!lst)
		return (0);
	temp = *lst;
	while (temp.next)
	{
		temp = *(temp.next);
		size++;
	}
	return (size);
}
