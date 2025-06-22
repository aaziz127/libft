/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:55:20 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/21 12:38:49 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*buff;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	buff = malloc(len * sizeof(char) + 1);
	if (!buff)
		return (NULL);
	ft_memcpy(buff, s, len + 1);
	return (buff);
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
