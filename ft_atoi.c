/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:08:37 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/12 16:23:40 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	minus;

	minus = 1;
	n = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - 48);
		str++;
	}
	return ((int) n * minus);
}

// int main(int ac, char **av)
// {
// 	printf("ft_atoi: %d\natoi: %d\n", ft_atoi (av[1]), atoi(av[1]));
// }