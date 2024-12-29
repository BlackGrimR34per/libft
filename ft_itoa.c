/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:03:54 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/11 22:06:14 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nb_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	if (n == 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		nbr_len;
	char	*output;
	long	nbr;

	nbr = n;
	nbr_len = ft_nb_len(nbr);
	output = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (!output)
		return (0);
	if (nbr < 0)
		nbr *= -1;
	output[nbr_len--] = '\0';
	while (nbr > 0)
	{
		output[nbr_len--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	if (n == 0)
		output[nbr_len] = '0';
	if (n < 0)
		output[nbr_len] = '-';
	return (output);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%zu", ft_nb_len(-2147483648));
// }