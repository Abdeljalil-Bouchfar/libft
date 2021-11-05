/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:15:24 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/05 12:07:30 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = -1;
	while (s[++i])
		f(i, s);
}

void	to_upper(unsigned int i, char *s)
{
	s[i] -= 32;
}

// int main ()
// {
// 	char s[] = "hello";
// 	ft_striteri(s, &to_upper);
// 	printf("%s", s);
// }