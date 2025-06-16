/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:24:02 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/16 11:45:56 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*destt;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = malloc(len);
	destt = dest;
	if (!dest)
		return (NULL);
	while (*s1 != '\0')
		*(dest++) = *(s1++);
	while (*s2 != '\0')
		*(dest++) = *(s2++);
	*dest = '\0';
	return (destt);
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
