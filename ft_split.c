/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:34:46 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/06 12:39:24 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	word_count;

	if (*s)
		return (0);
	word_count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			word_count++;
		while (*s != c && *s)
			s++;
	}
	return (word_count);
}

char	**ft_split(const char *s, char c)
{
	char	**output;
	size_t	word_len;
	int		index;

	output = (char **)malloc(sizeof(char *) * ft_count_words(s, c));
	if (!output || !s)
		return (0);
	index = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			output[index++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	output[index] = 0;
	return (output);
}
