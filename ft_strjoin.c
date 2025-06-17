/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:24:02 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/17 17:47:59 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(s1_len + s2_len + 1);
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, s1_len);
	ft_memcpy(result + s1_len, s2, s2_len + 1);
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
