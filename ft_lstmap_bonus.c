/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:22:10 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/11 10:48:37 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*tmp;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	ptr = NULL;
	content = NULL;
	while (lst != NULL)
	{
		tmp = lst->next;
		content = f(lst->content);
		if (!content)
		{
			ft_lstclear(&ptr, del);
			break ;
		}
		content = ft_strdup(content);
		ft_lstadd_back(&ptr, ft_lstnew(content));
		del(lst->content);
		lst = tmp;
	}
	return (ptr);
}
