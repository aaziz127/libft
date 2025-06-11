/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:58:22 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/11 21:46:23 by alaziz           ###   LAUSANNE.ch       */
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
	i = 0;
	if (!dest || !src)
		return (NULL);
	if (dst != ssrc)
	{
		while (i < n)
		{
			dst[i] = ssrc[i];
			i++;
		}
	}
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
	ft_memset(d, 88, 10);
	printf("ft_memset:dest = %s\n", d);
	ft_bzero(d, 10);
	printf("ft_bzero:dest = %s\n", d);
	return (0);
}
*/
