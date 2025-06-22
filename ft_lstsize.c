/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 14:16:04 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/21 14:51:26 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*
#include <assert.h>

void	print_step(t_list *current, int step, int *count)
{
    if (current == NULL) {
        printf("Étape %d: current = NULL → STOP\n", step);
        return;
    }
    printf("Étape %d: current = [%s] → compte [%s] → ",\

	step, (char *)current->content, (char *)current->content);
    (*count)++;
    if (current->next) {
        printf("passe à [%s]\n", (char *)current->next->content);
    } else {
        printf("passe à NULL\n");
    }
}

int	ft_lstsizetest(t_list *lst)
{
    t_list	*current = lst;
    int		count = 0;
    int		step = 1;

    printf("Début du comptage :\n");
    while (current != NULL)
	{
        print_step(current, step, &count);
        current = current->next;
        step++;
    }
    print_step(current, step, &count); // Affiche le NULL final
    return count;
}
int	main(void)
{
    // Création de la liste [A] -> [B] -> [C] -> NULL
    t_list	*list = ft_lstnew("A");
    list->next = ft_lstnew("B");
    list->next->next = ft_lstnew("C");
    int	size = ft_lstsize(list);
    printf("Résultat: %d (correct)\n", size);
	ft_lstsizetest(list);
    while (list) {
        t_list *tmp = list->next;
        free(list);
        list = tmp;
    }
    return 0;
}
*/
