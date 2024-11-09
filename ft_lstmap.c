/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:22:10 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/09 14:11:49 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*ptr;
	t_list	*node;

	ret = (t_list *)malloc(sizeof(t_list) * ft_lstsize(lst));
	ptr = lst;
	while (ptr)
	{
		node = ft_lstnew(ptr->content);
		node->content = f(node->content);
		ft_lstadd_back(&ret, node);
		ptr = ptr->next;
	}
	ft_lstclear(&lst, del);
	return (ret);
}	
