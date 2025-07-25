/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 09:48:01 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/22 20:41:50 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*p1 != *p2 || *p1 == '\0')
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
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
