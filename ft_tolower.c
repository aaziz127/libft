/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:38:44 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/12 15:33:35 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	k;

	i = 'S';
	j = 'k';
	k = 128;
	printf("%c to lower = %c\n", i, ft_tolower(i));
	printf("%c to lower = %c\n", j, ft_tolower(j));
	printf("%d to lower = %d\n", k, ft_tolower(k));
	return (0);
}
*/
