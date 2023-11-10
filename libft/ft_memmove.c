/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:29:53 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/15 21:45:11 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	if (!dst && !src)
		return (0);
	s = (char *) src;
	d = (char *) dst;
	if (dst > src)
		while (len--)
			d[len] = s[len];
	else
		ft_memcpy(dst, src, len);
	return (d);
}
