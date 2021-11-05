/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:52:33 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/05 12:08:25 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	res = malloc(ft_strlen((char *) s) * sizeof(char *) + 1);
	if (!res)
		return (0);
	i = -1;
	while (s[++i])
		res[i] = f(i, s[i]);
	res[i] = 0;
	return (res);
}

// char to_upper(unsigned int i, char c)
// {
// 	return (c - 32);
// }

// int main ()
// {
// 	char s[] = "hello";
// 	printf("%s", ft_strmapi(s, &to_upper));
// }