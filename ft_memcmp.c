/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 11:45:32 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/19 16:06:56 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*first;
	const unsigned char	*second;

	first = (const unsigned char *)s1;
	second = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (*first != *second)
			return (*first - *second);
		first++;
		second++;
		i++;
	}
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	int	res;

	if (argc < 3)
	{
		printf("Usage: %s <str1> <str2> [<len>]\n", argv[0]);
		exit(1);
	}
	if (argc == 3)
		res = ft_memcmp(argv[1], argv[2], 10);
	else
		res = ft_memcmp(argv[1], argv[2], atoi(argv[3]));
	if (res == 0)
	{
		printf("<str1> and <str2> are equal");
		if (argc > 3)
			printf(" in the first %d bytes\n", atoi(argv[3]));
		printf("\n");
	}
	else
	{
		if (res < 0)
		{
			printf("<str1> is less than <str2> (%d)\n", res);
		}
		else
		{
			printf("<str1> is greater than <str2> (%d)\n", res);
		}
	}
	return (0);
}
*/
