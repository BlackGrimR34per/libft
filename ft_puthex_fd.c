/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysheraun <ysheraun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 08:44:05 by ysheraun          #+#    #+#             */
/*   Updated: 2025/02/01 08:44:48 by ysheraun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(unsigned int nbr, int selector)
{
	char	*str;
	size_t	count;

	if (selector == 0)
		str = ft_uitoa_base();
}