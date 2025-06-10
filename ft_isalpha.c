/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:30:51 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/10 15:52:53 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	main(void)
{
	int	i;
	int	j;
	int	k;

	i = 123;
	j = 122;
	k = 62;
	printf("{ est alpha = %d\n", ft_isalpha(i));
	printf("z est alpha = %d\n", ft_isalpha(j));
	printf("> est alpha = %d\n", ft_isalpha(k));
	return (0);
}
