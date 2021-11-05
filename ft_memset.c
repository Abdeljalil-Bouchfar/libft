/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:13:00 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/05 12:06:24 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	size_t			i;

	str = (char *) b;
	i = -1;
	while (len--)
		str[len] = (unsigned char) c;
	return (b);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[50] = "GeeksForGeeks is for programming geeks.";
//     printf("\nBefore memset(): %s\n", str);

//     memset(str, '#', 5 * sizeof(char));

//     printf("After memset():  %s", str);
//     return 0;
// }