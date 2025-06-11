/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 09:30:50 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/11 09:41:29 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = 129;
	k = '|';
	printf("%c isascii = %d\n", i, ft_isascii(i));
	printf("%d isascii = %d\n", j, ft_isascii(j));
	printf("%c isascii = %d\n", k, ft_isascii(k));
	return (0);
}
*/
