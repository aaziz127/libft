/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 09:41:35 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/11 09:54:18 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
/*
int	main(void)
{
	int	i;
	int	j;
	int	k;

	i = '\t';
	j = '\a';
	k = '\'';
	printf("tab isprint = %d\n", ft_isprint(i));
	printf("bell isprint = %d\n", ft_isprint(j));
	printf("%c isprint = %d\n", k, ft_isprint(k));
	return (0);
}
*/
