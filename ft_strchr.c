/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:22:33 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/13 08:41:58 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
//     char	str[] = "My name is Abd..";
//     printf("strchr   : %s\n", strchr(NULL, 'r'));
// 	printf("ft_strchr: %s\n", ft_strchr(NULL, 'r'));
//     return 0;
// }