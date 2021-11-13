/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:25:08 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/13 08:28:52 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getstart(const char *s1, const char *set)
{
	int	i;

	i = -1;
	while (s1[++i])
		if (!ft_strchr(set, s1[i]))
			break ;
	return (i);
}

static int	getend(const char *s1, const char *set)
{
	size_t	len;

	len = ft_strlen(s1);
	while (len)
	{
		if (!ft_strchr(set, s1[len]))
			break ;
		len--;
	}
	return (len + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		size;
	char	*res;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = getstart(s1, set);
	end = getend(s1, set);
	size = end - start + 1;
	if (size <= 0)
		return (ft_strdup(""));
	res = malloc(sizeof(char) * size);
	if (!res)
		return (0);
	ft_strlcpy(res, s1 + start, size);
	return (res);
}
// int main()
// {
// 	char *s1 = "5\n\n \n \t\t\n  ";
// 	char *res = ft_strtrim(s1, " \n\t");
// 	printf("%s", res);
// }