/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:29:29 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/23 11:58:57 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;
	void	*content;

	new = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!(node))
		{
			if (content && del)
				del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
/*
void	print_list(t_list *lst)
{
    printf("[");
    while (lst)
    {
        printf("%d", *(int *)lst->content);
        if (lst->next)
            printf("] -> [");
        lst = lst->next;
    }
    printf("] -> NULL\n");
}

void	*double_int(void *content)
{
    int	*original = (int *)content;
    int	*new = malloc(sizeof(int));
	if (new)
		*new = (*original) * 2;
	return new;
}

int	main(void)
{
	t_list	*list = NULL;
    t_list	*mapped;
    int	nums[] = {1, 2, 3};
   
	for (int i = 0; i < 3; i++)
    {
        int *num = malloc(sizeof(int));
        *num = nums[i];
        ft_lstadd_back(&list, ft_lstnew(num));
    }
    printf("Original List: ");
    print_list(list);
    mapped = ft_lstmap(list, double_int, free);
    printf("After mapping with double_int():\n");
    printf("New List:     ");
    print_list(mapped);
    ft_lstclear(&list, free);
    ft_lstclear(&mapped, free);
    return 0;
}
*/
