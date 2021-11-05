/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <abouchfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:43:44 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/03 08:23:17 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		dest[i] = src[i];
	dest[i] = 0;
}

void	collect_words(char **arr, char *str, char c)
{
	int	index;
	int	i;
	int	n;

	index = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		n = i;
		while (str[i] != c && str[i])
			i++;
		n = i - n;
		arr[index] = malloc(n + 1);
		ft_strncpy(arr[index], str + i - n, n);
		index++;
	}
}

int	words_counter(char *str, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			words++;
		while (str[i] != c && str[i])
			i++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		length;

	length = words_counter((char *) s, c);
	arr = malloc((length + 1) * sizeof(char *));
	if (!arr)
		return (0);
	if (length)
		collect_words(arr, (char *) s, c);
	arr[length] = 0;
	return (arr);
}

// #include <stdio.h>
// int main (int ac, char **av)
// {
// 	int i = 0;
// 	char **words = ft_split(av[1], ' ');
// 	while(words[i])
// 		printf("- %s\n", words[i++]);
// }
