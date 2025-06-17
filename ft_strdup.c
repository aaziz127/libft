/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:55:20 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/17 13:30:33 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s) + 1;
	dup = malloc(len);
	if (!dup)
		return (NULL);
	return ((char *)ft_memcpy(dup, s, len));
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
