/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:29:59 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/09 11:59:07 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// int main()
// {
//     printf("isprint   : %d\n", isprint('m' ));
// 	printf("ft_isprint: %d\n", ft_isprint( 'm' ));
//     return 0;
// }
