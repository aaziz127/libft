/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:48:54 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/12 10:09:41 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*ssrc;
	char	*temp;

	ssrc = (char *)src;
	dst = (char *)dest;
	temp = ssrc;
	ft_memcpy(temp, ssrc, n);
	ft_memcpy(dst, temp, n);
	return (dst);
}
/*
int main(int argc, char *argv[])
{
	char *dest = malloc(42);
	char *src = NULL;
	size_t n = 3;
	
	if (argc == 2)
		src = argv[argc-1];
	else if (argc == 3)
	{
		src = argv[argc-2];
		n = atoi(argv[argc-1]);
	}
	else
	{
		printf("Usage: %s [src] [n]\n", argv[0]);
		return (0);
	}

	// Tests
	printf("src => '%s'	| n => %ld\n", src, n);
	ft_memmove(dest, src, n);
	printf("dest => '%s'\n", dest);
	memmove(dest, src, n);
	printf("dest => '%s'\n", dest);

	return (0);
}
*/
