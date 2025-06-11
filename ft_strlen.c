/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 09:58:56 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/11 10:13:39 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	char	*str = "Hello, World! on est a 42";

	printf("ft_strlen:\'%s\' =  %lu\n", str, ft_strlen(str));
	printf("strlen:\'%s\' = %lu\n", str, strlen(str));
	return (0);
}
*/
