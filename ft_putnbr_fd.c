/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 21:37:21 by yosherau          #+#    #+#             */
/*   Updated: 2025/02/01 11:59:23 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	size_t	count;

	str = ft_itoa(n);
	count = ft_strlen(str);
	ft_putstr_fd(str, fd);
	free(str);
	return (count);
}
