/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:54:06 by yosherau          #+#    #+#             */
/*   Updated: 2025/04/16 20:27:37 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinv(int num, ...)
{
	va_list	ap;
	char	*str;
	char	*temp;

	va_start(ap, num);
	str = ft_strdup("");
	while (num-- && str)
	{
		temp = str;
		str = ft_strjoin(str, va_arg(ap, char *));
		free(temp);
	}
	return (str);
}