/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:09:21 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/08 17:20:21 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *) haystack);
	while (*haystack && len--)
	{
		i = 0;
		while (needle[i] == haystack[i] && i <= len)
		{
			if (!needle[i + 1])
				return ((char *) haystack);
			i++;
		}
		haystack++;
	}
	return (0);
}

// int main()
// {  
// 	char s1[] = "aaabcabcd";
// 	char s2[] = "cd";
// 	int len = 8;
// 	printf("strnstr   : %s\n", strnstr(s1, s2, len));
// 	printf("ft_strnstr: %s", ft_strnstr(s1, s2, len));
// }