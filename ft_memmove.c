/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:29:53 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/12 18:19:03 by abouchfa         ###   ########.fr       */
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

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100] = "Learningisfun";
//     char str2[100] = "Learningisfun";
//     //printf("Original : %s\n", str);
//     // when overlap it start from first position
//     ft_memmove(str + 3, str, 10);
//     printf("Result ft_memmove  : %s\n", str);
// 	memmove(str2 + 3, str2, 10);
// 	printf("Result memmove     : %s", str2);

//     return 0;
// }