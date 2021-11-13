/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:06:09 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/12 18:23:23 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write (fd, s++, 1);
}

// #include <fcntl.h>
// int main()
// {
// 	int fd = open("test.txt", O_WRONLY);
// 	printf("file descriptor: %d\n", fd);
// 	ft_putstr_fd("2 Test 1", fd);
// }