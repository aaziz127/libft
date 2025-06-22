/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 09:50:30 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/20 01:23:45 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node ->next = NULL;
	return (node);
}
/*
int	main(void)
{
	char	*s;
	size_t	slen;
	size_t	*pslen;
	t_list	*node1;
	t_list	*node2;

	s = ft_strdup("hello libft");
	slen = ft_strlen(s);
	pslen = malloc(sizeof(size_t));
	*pslen = slen;
	node1 = ft_lstnew(s);
	node2 = ft_lstnew(pslen);
	node1->next = node2;
	printf("node1 content = %s\n", (char *)node1->content);
	printf("node2 content = %zu\n", *(size_t *)node2->content);
	printf("node1 content = %s\n", (char *)node1->next);
	free(node1->content);
	free(node2->content);
	free(node1);
	free(node2);
	return (0);
}
*/
