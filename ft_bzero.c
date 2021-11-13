/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:41:54 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/12 18:21:30 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *) s;
	while (n--)
		*str++ = 0;
}

// #include <stdio.h>

// int main()
// {
// 	char str[] = "Try in thsi";
// 	ft_bzero(str + 3, 3);
// 	printf("%s", str );
// }