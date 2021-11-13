/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:34:09 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/12 18:14:19 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (!n)
		return (0);
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (str1[i] == str2[i] && i < (n - 1))
		i++;
	return (str1[i] - str2[i]);
}

// #include <stdio.h>

// int main()
// {
// 	char s1[] = "this €\0\0\0 is string";
// 	char s2[] = "this \0\0\0\0 is string";
// 	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, 10));
// 	printf("memcmp   : %d\n", memcmp(s1, s2, 10));
// }