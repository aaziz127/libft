/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:52:50 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/11 21:04:06 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Sets the first n bytes of the memory area pointed to by s to 0.
// s	Memory area
//n	Number of bytes to be set to 0
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int	main(int argc, char *argv[])
{
	char	*str;
	size_t	n = 3;

	if (argc == 2)
		str = argv[argc - 1];
	else if (argc == 3)
	{
		str = argv[argc - 2];
		n = atoi(argv[argc - 1]);
	}
	else
	{
		printf("Usage: %s [c] [n]\n", argv[0]);
		return (0);
	}
	printf("argc => %d\n", argc);
	printf("str pre-bzero() => '%s'	| n => %lu\n", str, n);
	ft_bzero(str, n);
	printf("str post-bzero() => '%s'\n", str);
	return (0);
}
*/
