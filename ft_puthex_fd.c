/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 08:44:05 by ysheraun          #+#    #+#             */
/*   Updated: 2025/02/02 20:11:27 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex_fd(unsigned int nbr, int selector, int fd)
{
	char	*str;
	size_t	count;

	if (selector == 0)
		str = ft_uitoa_base(nbr, BASE_16_LOWERCASE);
	else
		str = ft_uitoa_base(nbr, BASE_16_UPPERCASE);
	count = ft_strlen(str);
	ft_putstr_fd(str, fd);
	free(str);
	return (count);
}
