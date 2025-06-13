/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:58:44 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/12 13:37:50 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	k;

	i = 's';
	j = 'K';
	k = 128;
	printf("%c to upper = %c\n", i, ft_toupper(i));
	printf("%c to upper = %c\n", j, ft_toupper(j));
	printf("%d to upper = %d\n", k, ft_toupper(k));
	return (0);
}
*/
