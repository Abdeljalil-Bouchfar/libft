/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:56:17 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/05 11:54:55 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *) s;
	while (n-- > 0 && *str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	str[] = "http://www.tutorialspoint.com";
// 	const char	ch = '.';
// 	char		*ret;

// 	ret = memchr(str, ch, strlen(str));
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	return (0);
// }
