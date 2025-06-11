/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:48:54 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/11 23:27:06 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*ssrc;
	char	*temp;

	ssrc = (char *)src;
	dst = (char *)dest;
	temp = ssrc;
	ft_memcpy(temp, ssrc, n);
	ft_memcpy(dst, temp, n);
	return (dst);
}
/*
#include <stdio.h>
#include <stddef.h>

void *my_memmove(void *dst, const void *src, size_t len) {
    unsigned char *d = dst;
    const unsigned char *s = src;

    if (!len) return dst;

    if (d < s) {
        size_t i = 0;
        while (i < len) {
            d[i] = s[i];
            i++;
        }
    } else {
        size_t i = len;
        while (i > 0) {
            d[i - 1] = s[i - 1];
            i--;
        }
    }

    return dst;
}
*/
int	main() {
    char str[] = "overlapping";
    ft_memmove(str + 5, str + 3, 6);
    printf("%s\n", str);  // Output: overing
    return 0;
}
