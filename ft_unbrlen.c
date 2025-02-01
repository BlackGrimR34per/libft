/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:41:39 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/01 11:40:13 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_unbrlen(unsigned long nbr, size_t baselen)
{
	size_t	len;

	len = 0;
	if (nbr == 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr /= baselen;
	}
	return (len);
}
