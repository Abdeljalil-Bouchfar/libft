/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:03:58 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/12 16:45:41 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	nbrtoi(char	*str, int size, long int nb)
{
	if (nb == 0)
		str[0] = '0';
	str[--size] = 0;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--size] = (nb % 10) + 48;
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	long int	temp_n;
	int			size;
	char		*str;

	size = 1;
	temp_n = n;
	if (temp_n <= 0)
	{
		temp_n = -temp_n;
		size++;
	}
	while (temp_n > 0)
	{
		temp_n /= 10;
		size++;
	}
	str = malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	nbrtoi(str, size, (long int) n);
	return (str);
}

// int main(int ac, char **av)
// {
// 	printf("%s", ft_itoa(atoi(av[1])));
// }