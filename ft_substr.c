/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 21:54:51 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/21 12:03:54 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	copy_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	copy_len = s_len - start;
	if (copy_len > len)
		copy_len = len;
	sub = (char *)malloc(copy_len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, copy_len);
	sub[copy_len] = '\0';
	return (sub);
}
/*
int	main(void)
{
	const char	*str = "Hello, Libft!";
	char		*sub;
	sub = ft_substr(str, 3, 7); // Should be "Libft"
	printf("Substring start at index: %d of: %s: %s\n",7, str, sub);
	free(sub);
	return (0);
}
*/
