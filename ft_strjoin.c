/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:22:28 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/01 14:25:20 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		index;
	char	*ret;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ret = malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	index = 0;
	if (!ret)
		return (NULL);
	while (*s1 || *s2)
	{
		if (*s1)
			ret[index++] = *s1++;
		else
			ret[index++] = *s2++;
	}
	ret[index] = '\0';
	return (ret);
}
