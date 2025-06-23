/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:05:50 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/23 11:18:40 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int	main(void)
{
    t_list	*list = ft_lstnew(strdup("Hello"));
    ft_lstadd_back(&list, ft_lstnew(strdup("World")));
    ft_lstiter(list, print_content);
    ft_lstclear(&list, free);
    return 0;
}
*/
