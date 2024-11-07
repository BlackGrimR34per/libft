/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:48:10 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/31 18:42:30 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(needle) <= 0)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && ((i + j) < len))
		{
			if (needle[j] != haystack[i + j])
				break ;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)(&haystack[i]));
		i++;
	}
	return (0);
}
