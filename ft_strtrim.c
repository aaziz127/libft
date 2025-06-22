/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:28:08 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/19 23:52:55 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	bound(char const *s, char const *set, size_t *start, size_t *end)
{
	*end = ft_strlen(s);
	while (s[*start] && set[(unsigned char)s[*start]])
		(*start)++;
	while (*end > *start && set[(unsigned char)s[*end - 1]])
		(*end)--;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*strtrim;
	char	*dst;
	char	inset[256];

	if (!s1 || !set)
		return ((char *)s1);
	ft_memset(inset, 0, sizeof(inset));
	while (*set)
		inset[(unsigned char)*set++] = 1;
	start = 0;
	bound(s1, inset, &start, &end);
	strtrim = malloc(end - start + 1);
	if (!strtrim)
		return (NULL);
	dst = strtrim;
	while (start < end)
		*dst++ = s1[start++];
	*dst = '\0';
	return (strtrim);
}
/*
int	main(int argc, char *argv[])
{
	char	*str;
	char	*set;
	char	*trimmed;

	if (argc != 3)
	{
		printf("Usage: %s <string> <set>\n", argv[0]);
		return (1);
	}
	str = argv[1];
	set = argv[2];
	trimmed = ft_strtrim(str, set);
	printf("ft_strtrim('%s', '%s') => ", str, set);
	printf("'%s'\n", trimmed);
}
*/
