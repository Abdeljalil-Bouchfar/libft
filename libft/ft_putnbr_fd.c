/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:15:27 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/16 15:50:54 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			i;
	long int	nb;
	char		str[11];

	i = 0;
	nb = n;
	if (nb < 0)
		nb = -nb;
	while (nb >= 10)
	{
		str[i++] = (nb % 10) + 48;
		nb /= 10;
	}
	str[i++] = nb + 48;
	if (n < 0)
		write (fd, "-", 1);
	while (i--)
		write (fd, str + i, 1);
}
