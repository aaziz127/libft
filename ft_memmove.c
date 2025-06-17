/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:48:54 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/17 14:53:20 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!dest || !src)
		return (dest);
	if (d <= s || d >= s + n)
		ft_memcpy(d, s, n);
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
/*
int	main(void)
{
	char	 str[] = "0123456789";
	char	 test1[20] = "ABCDEFGHIJKL";
    char	test2[20] = "ABCDEFGHIJKL";
	char	*s = ft_strdup(str);
	char	*t = ft_strdup(test1);
	char	*t2 = ft_strdup(test2);

    ft_memmove(str + 5, str, 5);
	ft_memmove(test1 + 12, test1, 5);
    ft_memmove(test2 + 7, test2 + 1, 5);
    printf("str:%s : fter ft_memmove: %s\n", s, str);
	printf("test1:%s :after ft_memmove: %s\n",t, test1);
    printf("test2:%s :after ft_memmove   : %s\n", t2, test2);

    return 0;
}
*/
