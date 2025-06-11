/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:14:18 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/11 21:25:46 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (!s)
		return (NULL);
	while (n != 0)
	{
		*str++ = (unsigned char)c;
		n--;
	}
	return (s);
}
/*
int	main(int argc, char *argv[])
{
	char	*str;
	int	c = 88;	// 'X'
	size_t	n = 3;

	if (argc == 2)
		str = argv[argc - 1];
	else if (argc == 3)
	{
		str = argv[argc - 2];
		c = atoi(argv[argc - 1]);
	}
	else if (argc == 4)
	{
		str = argv[argc - 3];
		c = atoi(argv[argc - 2]);
		n = atoi(argv[argc - 1]);
	}
	else
	{
		printf("Usage: %s [c] [n]\n", argv[0]);
		return (0);
	}
	printf("argc => %d\n", argc);
	printf("str pre-memset => %s	| c => %d	| n => %lu\n", str, c, n);
	printf("ft_memset(str, c, n) => %p\n", ft_memset(str, c, n));
	printf("str post-memset => %s	| c => %d	| n => %lu\n", str, c, n);
}
*/
