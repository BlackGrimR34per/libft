/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:46:52 by yosherau          #+#    #+#             */
/*   Updated: 2024/10/30 14:08:40 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;
	size_t	length;

	i = -1;
	length = ft_strlen(s1);
	dest = (char *)malloc((sizeof(char) * length) + 1);
	if (!dest)
		return (0);
	while (s1[++i])
		dest[i] = s1[i];
	dest[i] = '\0';
	return (dest);
}
