/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 11:42:31 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/01 12:00:51 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr(unsigned int nbr)
{
	char	*str;
	size_t	count;

	str = ft_uitoa_base(nbr, BASE_10);
	count = ft_strlen(str);
	ft_putstr_fd(str, STD_OUT);
	free(str);
	return (count);
}
