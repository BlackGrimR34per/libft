/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:18:42 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/05 15:00:25 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		start;
	int		end;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]))
		end--;
	if (start >= end)
		return ("");
	ret = malloc(end - start + 2);
	if (!ret)
		return (0);
	ft_strlcpy(ret, &s1[start], end - start + 2);
	return (ret);
}
