/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:58:42 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/11 09:22:19 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) \
			|| (c >= '0' && '9' >= c));
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	k;

	i = '1';
	j = 'd';
	k = '}';
	printf("%d is_alnum = %d\n", i, ft_isalnum(i));
	printf("%d is_alnum = %d\n", j, ft_isalnum(j));
	printf("%d is_alnum = %d\n", k, ft_isalnum(k));
	return (0);
}
*/
