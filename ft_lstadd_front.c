/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 12:40:38 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/21 13:32:54 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new ->next = *lst;
	*lst = new;
}
/*
#include <assert.h>
void test_normal_case()
{
    printf("=== Cas normal ===\n");
    t_list *list = NULL;
    t_list node1 = {.content = "Node1", .next = NULL};
    t_list node2 = {.content = "Node2", .next = NULL};
    ft_lstadd_front(&list, &node1);
    assert(list == &node1);
    assert(list->next == NULL);
    ft_lstadd_front(&list, &node2);
    assert(list == &node2);
    assert(list->next == &node1);
    assert(list->next->next == NULL);
    
    printf("Test OK: insertion multiple en tête\n");
}

void test_empty_list()
{
    printf("=== Liste vide ===\n");
    t_list *list = NULL;
    t_list node = {.content = "Single", .next = NULL};
    ft_lstadd_front(&list, &node);
    assert(list == &node);
    assert(list->next == NULL);
    printf("Test OK: insertion dans liste vide\n");
}

void test_null_parameters()
{
    printf("=== Paramètres NULL ===\n");
    t_list *list = NULL;
    t_list node = {.content = "Test", .next = NULL};
    ft_lstadd_front(NULL, &node);
    printf("Test OK: list=NULL ne crashe pas\n");
    ft_lstadd_front(&list, NULL);
    assert(list == NULL);
    printf("Test OK: new=NULL ne crashe pas\n");
    ft_lstadd_front(NULL, NULL);
    printf("Test OK: list=NULL et new=NULL ne crashe pas\n");
}

void test_next_initialization()
{
    printf("=== Initialisation next ===\n");
    t_list *list = NULL;
    t_list node = {.content = "Test", .next = (void *)0x1234};
    ft_lstadd_front(&list, &node);
    assert(list->next == NULL);
	printf("Test OK: next est bien initialisé\n");
}

int main(void)
{
    test_normal_case();
    test_empty_list();
    test_null_parameters();
    test_next_initialization();
    printf("\nTous les tests critiques passés avec succès!\n");
    return 0;
}
*/
