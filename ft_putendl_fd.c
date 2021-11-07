/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:09:09 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/07 10:15:09 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, s, 1);
		s++;
	}
	write (fd, "\n", 1);
}

// #include <fcntl.h>
// int main()
// {
// 	int fd = open("test.txt", O_WRONLY);
// 	printf("file descriptor: %d\n", fd);
// 	ft_putendl_fd("Test", fd);
// }