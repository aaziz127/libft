/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:28:08 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/16 16:39:46 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	trimstart(char const *s, char const *set, size_t *start)
{
	*start = 0;
	while (s[*start] && set[(unsigned char)s[*start]])
		(*start)++;
}

static void	trimend(char const *s, char const *set, size_t *start, size_t *end)
{
	if (!(s[*start]))
		*end = *start;
	else
	{
		*end = strlen(s) - 1;
		while (*end > *start && set[(unsigned char)s[*end]])
			(*end)--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;
	char	inset[256];

	if (!s1 || !set)
		return ((char *)s1);
	memset(inset, 0, sizeof(inset));
	while (*set)
		inset[(unsigned char)*set++] = 1;
	start = 0;
	trimstart(s1, inset, &start);
	trimend(s1, inset, &start, &end);
	if (start > end)
		return ((char *)ft_calloc(1, sizeof(char)));
	trimmed = malloc(end - start + 2);
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + start, end - start + 1);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
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
