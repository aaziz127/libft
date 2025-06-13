/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:23:47 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/12 11:52:36 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			dest_len;
	size_t			src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest == NULL || src == NULL)
		return (0);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while ((dest_len + i) < (size - 1) && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
    char	buf[20];
    size_t	result;

    printf("=== TEST 1: Normal concatenation ===\n");
    strcpy(buf, "Hello");
    result = ft_strlcat(buf, " World", sizeof(buf));
    printf("Result: '%s' (len: %zu)\n", buf, result);
    printf("\n=== TEST 2: Exact fit ===\n");
    strcpy(buf, "Hello");
    result = ft_strlcat(buf, "!!!", 9);  // "Hello!!!" + null = 9 bytes
    printf("Result: '%s' (len: %zu)\n", buf, result);
    printf("\n=== TEST 3: Truncation ===\n");
    strcpy(buf, "Hello");
    result = ft_strlcat(buf, " World Wide Web", 12);
    printf("Result: '%s' (len: %zu)\n", buf, result);
    printf("Expected truncation to 'Hello Worl'\n");
    printf("\n=== TEST 4: Empty destination ===\n");
    buf[0] = '\0';
    result = ft_strlcat(buf, "Welcome", sizeof(buf));
    printf("Result: '%s' (len: %zu)\n", buf, result);
    printf("\n=== TEST 5: Empty source ===\n");
    strcpy(buf, "Hello");
    result = ft_strlcat(buf, "", sizeof(buf));
    printf("Result: '%s' (len: %zu)\n", buf, result);
    printf("\n=== TEST 6: Zero size buffer ===\n");
    strcpy(buf, "Hello");
    result = ft_strlcat(buf, " World", 0);
    printf("Result: '%s' (len: %zu)\n", buf, result);
    printf("(Buffer should remain unchanged)\n");
	char dest[15] = "ABC";
	char src[] = "DEFGHIJKL";
	printf("result:%s lenft_strlcat: %lu\n",dest, ft_strlcat(dest, src, 9));
	
    return (0);
}
*/
