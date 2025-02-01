/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:03:54 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/01 11:45:47 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nbr)
{
	size_t	nbrlen;
	char	*str;
	long	tempnbr;

	tempnbr = nbr;
	nbrlen = ft_nbrlen(nbr);
	str = (char *)malloc(sizeof(char) * (nbrlen + 1));
	if (!str)
		return (0);
	if (tempnbr < 0)
		tempnbr = -tempnbr;
	str[nbrlen--] = '\0';
	while (tempnbr > 0)
	{
		str[nbrlen--] = (tempnbr % 10) + 48;
		tempnbr /= 10;
	}
	if (nbr == 0)
		str[nbrlen] = '0';
	if (nbr < 0)
		str[nbrlen] = '-';
	return (str);
}
