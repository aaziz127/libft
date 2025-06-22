/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 01:39:51 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/23 01:57:12 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !*lst)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		if (del && current->content)
			del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

/*
void del_string(void *content) {
    printf("Deleting string: %s\n", (char *)content);
    free(content);
}

void del_int(void *content) {
    printf("Deleting integer: %d\n", *(int *)content);
    free(content);
}

void print_list(t_list *lst, const char *type) {
    printf("List: ");
    while (lst) {
        if (strcmp(type, "string") == 0)
            printf("[%s] -> ", (char *)lst->content);
        else
            printf("[%d] -> ", *(int *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void) {
    printf("=== TEST 1: Normal string list ===\n");
    t_list *list = ft_lstnew(strdup("First"));
    list->next = ft_lstnew(strdup("Second"));
    list->next->next = ft_lstnew(strdup("Third"));
    print_list(list, "string");
    ft_lstclear(&list, del_string);
    printf("After clear: %p\n", (void *)list);
    
    printf("\n=== TEST 2: NULL list pointer ===\n");
    ft_lstclear(NULL, del_string);  // Should not crash
    
    printf("\n=== TEST 3: Empty list (NULL *lst) ===\n");
    t_list *empty = NULL;
    ft_lstclear(&empty, del_string); // Should not crash
    printf("After clear: %p\n", (void *)empty);
    
    printf("\n=== TEST 4: Integer list ===\n");
    int *n1 = malloc(sizeof(int));
    int *n2 = malloc(sizeof(int));
    int *n3 = malloc(sizeof(int));
    *n1 = 42; *n2 = 99; *n3 = -1;
    t_list *nums = ft_lstnew(n1);
    nums->next = ft_lstnew(n2);
    nums->next->next = ft_lstnew(n3);
    print_list(nums, "int");
    ft_lstclear(&nums, del_int);
    printf("After clear: %p\n", (void *)nums);
    
    printf("\n=== TEST 5: NULL del function ===\n");
    t_list *test5 = ft_lstnew(strdup("Test5"));
    test5->next = ft_lstnew(strdup("Should leak content"));
    print_list(test5, "string");
    ft_lstclear(&test5, NULL);  // Will leak content but free nodes
    printf("After clear: %p\n", (void *)test5);
    
    printf("\n=== TEST 6: Node with NULL content ===\n");
    t_list *test6 = ft_lstnew(NULL);
    test6->next = ft_lstnew(strdup("Valid content"));
    print_list(test6, "string");
    ft_lstclear(&test6, del_string);  // Should handle NULL content
    printf("After clear: %p\n", (void *)test6);
    
    return 0;
}
*/
