/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:09:21 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/02 10:23:00 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	if (!needle)
		return ((char *) haystack);
	while (*haystack && len--)
	{
		i = 0;
		while (needle[i] == haystack[i])
		{
			if (!needle[i + 1])
				return ((char *) haystack);
			i++;
		}
		haystack++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	char s1[] = "Search for it here";
// 	char s2[] = "for";
// 	printf("strnstr   : %s\n", strnstr(s1, s2, 0));
// 	printf("ft_strnstr: %s", strnstr(s1, s2, 0));
// }