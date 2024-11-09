/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:10:47 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/09 15:45:56 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ret_value;
	size_t	copy_len;

	ret_value = ft_strlen(src);
	copy_len = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (*dst && copy_len++ < dstsize)
	{
		dst++;
		ret_value++;
	}
	while (*src && copy_len++ < dstsize - 1)
		*dst++ = *src++;
	if (copy_len <= dstsize)
		*dst = '\0';
	return (ret_value);
}
