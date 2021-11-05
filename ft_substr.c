/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:16:56 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/05 12:09:33 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	res = malloc (sizeof(char) * len + 1);
	if (!res)
		return (0);
	i = -1;
	while (++i < len && s[start])
		res[i] = s[start++];
	res[i] = 0;
	return (res);
}
