/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 09:48:01 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/17 14:52:59 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*first;
	unsigned char	*second;

	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	while (n-- > 0 && *first != '\0' && *second != '\0')
	{
		if (*first != *second)
			return (*first - *second);
		first++;
		second++;
	}
	return (*first - *second);
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
		res = ft_strncmp(argv[1], argv[2], 10);
	else
		res = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
	if (res == 0)
	{
		printf("<%s> and <%s> are equal", argv[1], argv[2]);
		if (argc > 3)
			printf(" in the first %d bytes\n", atoi(argv[3]));
		printf("\n");
	}
	else
	{
		if (res < 0)
		{
			printf("<%s> is less than <%s> (%d)\n", argv[1], argv[2], res);
		}
		else
		{
			printf("<%s> is greater than <%s> (%d)\n", argv[1], argv[2], res);
		}
	}
	return (0);
}
*/
