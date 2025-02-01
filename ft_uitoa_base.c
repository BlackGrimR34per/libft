/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:19:40 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/01 12:11:21 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa_base(unsigned long nbr, char *base)
{
	char	*str;
	int		nbrlen;
	size_t	baselen;

	baselen = ft_strlen(base);
	nbrlen = ft_unbrlen(nbr, baselen);
	str = (char *)malloc(sizeof(char) * (nbrlen + 1));
	if (!str)
		return (NULL);
	str[nbrlen--] = '\0';
	if (nbr == 0)
		str[nbrlen] = '0';
	while (nbr > 0)
	{
		str[nbrlen--] = base[(nbr % baselen)];
		nbr /= baselen;
	}
	return (str);
}
