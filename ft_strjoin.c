/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:24:02 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/22 20:56:13 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result;
	char	*dst;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)malloc(s1_len + s2_len + 1);
	if (!result)
		return (NULL);
	dst = result;
	while (*s1)
		*dst++ = *s1++;
	while (*s2)
		*dst++ = *s2++;
	*dst = '\0';
	return (result);
}
/*
int	main(int argc, char *argv[])
{
	char	*d;

	if (argc != 3)
	{
		printf("usage: %s <s1> <s2>", argv[0]);
		return (1);
	}
	d = ft_strjoin(argv[argc - 2], argv[argc - 1]);
	printf("%s", d);
	printf("\nresul of join:%s and: %s \n", argv[argc - 2], argv[argc - 1]);
	return (0);
}
*/
