/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:35:12 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/05 11:51:50 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s_l;
	unsigned int	d_l;

	j = 0;
	s_l = 0;
	d_l = 0;
	while (dst[d_l])
		d_l++;
	while (src[s_l])
		s_l++;
	if (d_l >= dstsize)
		return (dstsize + s_l);
	i = d_l;
	while (src[j] && i < (dstsize - 1))
		dst[i++] = src[j++];
	dst[i] = 0;
	return (d_l + s_l);
}
