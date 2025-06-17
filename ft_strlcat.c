/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:23:47 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/17 14:57:36 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (dlen >= size)
		return (dlen + ft_strlen(src));
	ft_memcpy(&dest[dlen], src, ft_min(slen + 1, size - dlen));
	if (slen > size - dlen - 1)
		dest[size - 1] = '\0';
	return (dlen + slen);
}
/*
int main(int argc, char *argv[])
{
    char *dest = NULL;
    const char *src = "default";
    size_t size = 15;

    if (argc >= 2)
        src = argv[1];
    if (argc >= 3)
        size = ft_atoi(argv[2]);

    // Initialisation de dest avec "Hello"
    dest = ft_strdup("Hello");
    if (!dest)
    {
        fprintf("Error: malloc failed\n");
        return (1);
    }

    printf("Test ft_strlcat(dest, \"%s\", %zu)\n", src, size);
    printf("Before: dest = \"%s\"\n", dest);

    size_t len = ft_strlcat(dest, src, size);
    printf("After:  dest = \"%s\"\t\t| length = %zu\n", dest, len);

    free(dest);
    return (0);
}
*/
