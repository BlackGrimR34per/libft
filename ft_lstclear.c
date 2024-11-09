/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:48:57 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/09 14:06:10 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst)
		return ;
	ptr = *lst;
	while (ptr)
	{
		del(ptr->content);
		free(ptr);
		ptr = (*lst)->next;
	}
	(*lst) = NULL;
}
