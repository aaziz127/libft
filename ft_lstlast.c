/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:09:58 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/21 15:28:08 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}
/*
int	main(void)
{
	t_list	*list;
	t_list	*last;

	list = ft_lstnew("Premier");
	ft_lstadd_back(&list, ft_lstnew("Second"));
	last = ft_lstlast(list);
	printf("Dernier élément : %s\n", (char *)last->content); 
	ft_lstadd_back(&list, ft_lstnew("3"));
	last = ft_lstlast(list);
	printf("Dernier élément : %s\n", (char *)last->content); 
	ft_lstadd_back(&list, ft_lstnew("dernier"));
	last = ft_lstlast(list);
	printf("Dernier élément : %s\n", (char *)last->content); 
	ft_lstadd_back(&list, ft_lstnew("c est fini oui/!!"));
	last = ft_lstlast(list);
	printf("Dernier élément : %s\n", (char *)last->content); 
	return (0);
}
*/
