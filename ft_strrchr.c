/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:23:25 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/13 08:42:45 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = NULL;
	while (*s)
	{
		if (*s == (char) c)
			temp = (char *) s;
		s++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (temp);
}

// #include <stdio.h>
// int main()
// {
//     char	str[] = "My name is abd..";
//     printf("strrchr   : %s\n", strrchr(str, 'm' + 2560));
// 	printf("ft_strrchr: %s\n", ft_strrchr(str, 'm' + 2560));
//     return 0;
// }