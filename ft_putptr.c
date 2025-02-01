/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:29:41 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/01 12:10:28 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr(void *ptr)
{
	char	*str;
	size_t	count;

	if (!ptr)
		return (ft_putstr_fd(THE_ABSENCE_OF_VALUE, STD_OUT));
	str = ft_uitoa_base((unsigned long)ptr, BASE_16_LOWERCASE);
	count = ft_putstr_fd("0x", STD_OUT) + ft_putstr_fd(str, STD_OUT);
	free(str);
	return (count);
}
