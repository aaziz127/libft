/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:58:22 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/11 15:33:29 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*ssrc;
	size_t	i;

	dst = (char *)dest;
	ssrc = (char *)src;
	if (dest == src)
		return (dest);
	i = 0;
	while (i < n)
	{
		dst[i] = ssrc[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int	main(void)
{
	char	*s = "hello wolrd of 42 lux";
	char	*d;

	d = (char *) malloc(11 * sizeof(char));
	ft_memcpy(d, s, 10);
	printf("ft_memcpy:src = %s\ndest = %s\n", s, d);
	ft_memset(d, 45, 10);
	printf("ft_memset:dest = %s\n", d);
	ft_bzero(d, 10);
	printf("ft_bzero:dest = %s\n", d);
	return (0);
}
*/
