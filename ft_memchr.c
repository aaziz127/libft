/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 11:10:33 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/13 11:42:48 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n != 0 || !str)
	{
		if (*str == (unsigned char)c)
			return (str);
		n--;
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Hellau, world!";
	char		tofind = 'H';
	char		*found = ft_memchr(str, tofind, 20);

	if (found != NULL)
	{
		printf("%c:foud at index:%ld in:\'%s\'\n", tofind, found - str, str);
	}
	else
	{
		printf("Not found\n");
	}
}
*/
