/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:18:42 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/09 16:56:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (ft_strchr(set, *start))
		start++;
	while (ft_strchr(set, *end))
		end--;
	ret = ft_substr(start, 0, end - start + 1);
	return (ret);
}
