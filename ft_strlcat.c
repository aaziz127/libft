/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:23:47 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/23 13:11:00 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	n;
	unsigned int	dlen;
	unsigned int	slen;

	slen = ft_strlen(src);
	if (!dest && size == 0)
	{
		return (slen);
	}
	dlen = ft_strlen(dest);
	if (size <= dlen)
	{
		return (size + slen);
	}
	n = dlen;
	dest += n;
	while (n < size - 1 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n++;
	}
	*dest = '\0';
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
        printf("Error: malloc failed\n");
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
