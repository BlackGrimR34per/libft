/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:14:46 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/06 16:30:07 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*output;
	unsigned int	index;

	index = -1;
	if (!s)
		return (0);
	output = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!output)
		return (0);
	while (s[++index])
		output[index] = f(index, s[index]);
	output[index] = '\0';
	return (output);
}
