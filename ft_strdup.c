/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:55:20 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/15 21:37:27 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_memset(dup, 0, len + 1);
	ft_memcpy(dup, s, len);
	return (dup);
}
/*
int	main(void)
{
    char	*original = "Hello, Libft!";
    char	*copy;
    int		*arr;

    copy = ft_strdup(original);
    printf("ft_strdup: %s\n", copy);
    free(copy);
    return (0);
}
*/
