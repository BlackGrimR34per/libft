/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:20:47 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/04 15:20:40 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	int				index;
	unsigned int	length;

	ret = (char *)malloc((sizeof(char) * len) + 1);
	if (!ret || !s)
		return (0);
	length = ft_strlen(s);
	if (start > length)
	{
		*ret = '\0';
		return (ret);
	}
	index = 0;
	while (len--)
		ret[index++] = *(s + start++);
	ret[index] = '\0';
	return (ret);
}
