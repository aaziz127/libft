/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 22:31:06 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/19 16:20:34 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*lastoccur;
	unsigned char	uc;

	uc = (unsigned char)c;
	lastoccur = NULL;
	while (*s)
	{
		if ((unsigned char)*s == uc)
			lastoccur = s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return ((char *)lastoccur);
}
/*
int	main(void)
{
    char s[] = "tripouille";
    char s2[] = "ltripouiel";
    char s3[] = "";

    printf("Test 1: %p\n", ft_strrchr(s, 't') == s); // OK
    printf("Test 2: %p\n", ft_strrchr(s, 'l') == s + 8); // OK
    printf("Test 3: %p\n", ft_strrchr(s2, 'l') == s2 + 9); // OK
    printf("Test 4: %p\n", ft_strrchr(s, 'z') == NULL); // OK
    printf("Test 5: %p\n", ft_strrchr(s, 0) == s + strlen(s)); // OK
    printf("Test 6: %p\n", ft_strrchr(s, 't' + 256) == s); // OK
    char *empty = calloc(1, 1);
    printf("Test 7: %p\n", ft_strrchr(empty, 'V') == NULL); // OK
    free(empty);
    printf("Test 8: %p\n", ft_strrchr(s3, 0) == s3); // OK
}
*/
