/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:33:05 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/21 15:36:12 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}
/*
#include <assert.h>

int	lst_contains(t_list *lst, void *target, size_t size)
{
    while (lst)
	{
        if (memcmp(lst->content, target, size) == 0)
            return 1;
        lst = lst->next;
    }
    return 0;
}

void	test_specific_element()
{
    t_list	*list = NULL;
    int	a[] = {1};
    int	b[] = {2};
    int	c[] = {3};
    ft_lstadd_back(&list, ft_lstnew(a));
    ft_lstadd_back(&list, ft_lstnew(b));
    ft_lstadd_back(&list, ft_lstnew(c));
    int	test1[] = {1};
	int	test2[] = {4};
	assert(lst_contains(list, test1, sizeof(int)) == 1);
    assert(lst_contains(list, test2, sizeof(int)) == 0);
    printf("Test de présence d'élément réussi !\n");
    while (list) {
        t_list *tmp = list->next;
        free(list);
        list = tmp;
    }
}

int	main(void)
{
    test_specific_element();
    return 0;
}
*/
