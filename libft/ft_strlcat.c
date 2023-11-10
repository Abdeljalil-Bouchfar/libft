/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:35:12 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/16 15:56:30 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	s_l;
	size_t	d_l;

	j = 0;
	s_l = 0;
	d_l = 0;
	s_l = ft_strlen(src);
	if (!dst && !dstsize)
		return (s_l);
	d_l = ft_strlen(dst);
	if (d_l >= dstsize)
		return (dstsize + s_l);
	i = d_l;
	while (src[j] && i < (dstsize - 1))
		dst[i++] = src[j++];
	dst[i] = 0;
	return (d_l + s_l);
}
