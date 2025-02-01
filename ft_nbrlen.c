/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 08:32:39 by ysheraun          #+#    #+#             */
/*   Updated: 2025/02/01 11:46:28 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(int nbr)
{
	size_t	len;

	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	if (nbr == 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}
