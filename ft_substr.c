/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 21:54:51 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/15 22:05:02 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	copy_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	copy_len = len;
	if (start + len > s_len)
		copy_len = s_len - start;
	sub = malloc(copy_len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < copy_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	const char	*str = "Hello, Libft!";
	char		*sub;
	sub = ft_substr(str, 7, 5); // Should be "Libft"
	printf("Substring start at index: %d of: %s: %s\n",7, str, sub);
	free(sub);
	return (0);
}
*/
