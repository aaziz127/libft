/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:14:18 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/15 20:44:04 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = (unsigned char)c;
	return (s);
}
/*
int	main(int argc, char *argv[])
{
	char	*str;
	int	c = 88;	// 'X'
	size_t	n = 3;

	if (argc == 2)
		str = argv[argc - 1];
	else if (argc == 3)
	{
		str = argv[argc - 2];
		c = atoi(argv[argc - 1]);
	}
	else if (argc == 4)
	{
		str = argv[argc - 3];
		c = atoi(argv[argc - 2]);
		n = atoi(argv[argc - 1]);
	}
	else
	{
		printf("Usage: %s [c] [n]\n", argv[0]);
		return (0);
	}
	printf("argc => %d\n", argc);
	printf("str pre-memset => %s	| c => %d	| n => %lu\n", str, c, n);
	printf("ft_memset(str, c, n) => %p\n", ft_memset(str, c, n));
	printf("str post-memset => %s	| c => %d	| n => %lu\n", str, c, n);
}
*/
/*
int main(void)
{
    char arr[10];
    ft_memset(arr, 'A', 5);
    arr[5] = '\0';  // Not needed here; memset doesn't null-terminate
    printf("%s\n", arr);  // Output: AAAAA
    return 0;
}
*/
