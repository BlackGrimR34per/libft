/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 11:42:31 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/02 20:12:58 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr_fd(unsigned int nbr, int fd)
{
	char	*str;
	size_t	count;

	str = ft_uitoa_base(nbr, BASE_10);
	count = ft_strlen(str);
	ft_putstr_fd(str, fd);
	free(str);
	return (count);
}
