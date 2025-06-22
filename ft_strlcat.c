/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:23:47 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/22 21:23:32 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	copylen;

	if (!dest || !src)
	{
		if (dest)
			return (size + ft_strlen(dest));
		if (src)
			return (ft_strlen(src));
		return (0);
	}
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0)
		return (slen);
	if (dlen >= size)
		return (size + slen);
	copylen = size - dlen -1;
	if (slen < copylen)
		copylen = slen;
	ft_memcpy(dest + dlen, src, copylen);
	dest[dlen + copylen] = '\0';
	return (dlen + slen);
}
/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		len;
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	if (size < ft_strlen(dst))
		return (size + ft_strlen(src));
	else
	{
		while (dst[i])
			i++;
		ft_strlcpy(&dst[i], src, size - i);
		len = ft_strlen(src) + i;
		return (len);
	}
}
*/
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
