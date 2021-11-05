/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:08:03 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/05 10:00:17 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// #include <fcntl.h>
// int main()
// {
// 	int fd = open("test.txt", O_WRONLY);
// 	printf("file descriptor: %d\n", fd);
// 	ft_putchar_fd('g', fd);
// }