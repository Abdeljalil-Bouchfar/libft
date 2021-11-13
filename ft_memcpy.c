/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:11:37 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/13 15:02:24 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;

	if (!dst && !src)
		return (0);
	s = (char *) src;
	d = (char *) dst;
	while (n--)
		*d++ = *s++;
	return (dst);
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