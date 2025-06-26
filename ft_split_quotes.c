/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_quotes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:34:46 by yosherau          #+#    #+#             */
/*   Updated: 2025/06/26 19:27:18 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	handle_quotes(const char **s)
{
	char	quote;

	quote = **s;
	(*s)++;
	while (**s != quote && **s)
		(*s)++;
	if (**s)
		(*s)++;
}

static int	ft_count_words(const char *s, char c)
{
	int		word_count;

	if (!*s)
		return (0);
	word_count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\'' || *s == '"')
		{
			word_count++;
			handle_quotes(&s);
			continue ;
		}
		if (*s)
			word_count++;
		while (*s != c && *s)
			s++;
	}
	return (word_count);
}

static char	*extract_words(const char **s, char c)
{
	char	quote;
	size_t	word_len;

	word_len = 1;
	if (**s == '\'' || **s == '"')
	{
		quote = **s;
		while ((*s)[word_len] && (*s)[word_len] != quote)
			word_len++;
		if ((*s)[word_len])
			word_len++;
		return (ft_substr(*s, 0, word_len));
	}
	else
	{
		if (!ft_strchr(*s, c))
			word_len = ft_strlen(*s);
		else
			word_len = ft_strchr(*s, c) - *s;
		return (ft_substr(*s, 0, word_len));
	}
}

char	**ft_split_quotes(const char *s, char c)
{
	char	**output;
	int		index;

	output = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!output)
		return (0);
	index = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			output[index] = extract_words(&s, c);
			s += ft_strlen(output[index++]);
		}
	}
	output[index] = 0;
	return (output);
}
