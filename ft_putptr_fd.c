/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:29:41 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/02 20:19:14 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putptr_fd(void *ptr, int fd)
{
	char	*str;
	size_t	count;

	if (!ptr)
		return (ft_putstr_fd(THE_ABSENCE_OF_VALUE, STD_OUT));
	str = ft_uitoa_base((unsigned long)ptr, BASE_16_LOWERCASE);
	count = ft_putstr_fd("0x", fd) + ft_putstr_fd(str, fd);
	free(str);
	return (count);
}
