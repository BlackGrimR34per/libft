/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:22:10 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/11 17:03:46 by yosherau         ###   ########.fr       */
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
		ft_lstadd_back(&ptr, ft_lstnew(content));
		lst = tmp;
	}
	return (ptr);
}
