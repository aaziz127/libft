/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 09:33:57 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/19 16:36:25 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
* The strlcpy() function copies up to size - 1 characters 
* from the NUL-terminated string src to dst,
* NUL-terminating the result.
* return:For strlcpy() that means the length of src.
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
int	main(int argc, char *argv[])
{
    char	*dest = NULL;
    const	char *src = "default";
    size_t	size = 10;

    if (argc >= 2)
        src = argv[1];
    if (argc >= 3)
        size = atoi(argv[2]);

    dest = calloc(size + 1, sizeof(char));
    if (!dest)
    {
        fprintf(stderr, "Error: malloc failed\n");
        return (1);
    }

    printf("Test ft_strlcpy(dest, \"%s\", %zu)\n", src, size);
    printf("Before: dest = \"%s\"\n", dest);
    size_t ft_len = ft_strlcpy(dest, src, size);
    printf("After:  dest = \"%s\"\t\t| length = %zu\n", dest, ft_len);

    // Test with custom strlcpy for comparison
    char *dest2 = calloc(size + 1, sizeof(char));
    if (dest2)
    {
        printf("Test my_strlcpy(dest2, \"%s\", %zu)\n", src, size);
        printf("Before: dest2 = \"%s\"\n", dest2);
        size_t ref_len = strlcpy(dest2, src, size);
        printf("After:  dest2 = \"%s\"\t\t| length = %zu\n", dest2, ref_len);
        free(dest2);
    }

    free(dest);
    return (0);
}
*/
