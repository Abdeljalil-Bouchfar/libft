/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:11:37 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/05 12:05:18 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	if (!dst && !src)
		return (0);
	i = 0;
	s = (char *) src;
	d = (char *) dst;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100] = "Geeksfor";
//     printf("Original :%s\n ", str);
//     memcpy(str + 5, str, 10);
//     printf("Result   : %s\n ", str); 
//     return 0;
// }