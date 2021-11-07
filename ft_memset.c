/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:13:00 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/07 16:00:38 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	size_t			i;

	str = (char *) b;
	int r = 0;
	while (str[r])
		r++;
	printf("str len %d  %s\n",r,str);
	i = -1;
	while (len--)
		str[len] = (unsigned char) c;
	return (b);
}

// int main()
// {
//     char str[50] = "GeeksForGeeks is for programming geeks.";
//     printf("\nBefore memset(): %s\n", str);

//     ft_memset(str, 65, 5 * sizeof(char));
//     printf("After memset():  %s\n", str);
//     return 0;
// }