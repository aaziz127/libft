/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:58:42 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/11 00:24:16 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	main(void)
{
	int	i;
	int	j;
	int	k;

	i = 21;
	j = 'd';
	k = '}';
	printf("%d is_alnum = %d\n", i, ft_isalnum(i));
	printf("%d is_alnum = %d\n", j, ft_isalnum(j));
	printf("%d is_alnum = %d\n", k, ft_isalnum(k));
	return (0);
}
