/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:58:22 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/21 10:24:15 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
typedef struct s_type
{
	int				a;
	char			*s;
	struct s_type	*st;
}	t_type;

int	main(void)
{
	char	*s = "hello wolrd of 42 lux";
	char	*d;
	t_type	*tt;
	t_type	*tt1;
	
	tt = (t_type *)malloc(sizeof(t_type));
	tt ->a = 3;
	tt ->s = "string in t_type";
	tt ->st = tt;
	tt1 = (t_type *)malloc(sizeof(t_type));
	ft_memcpy(tt1, tt, sizeof(t_type));
	printf("t_type tt a = %d : s=%s : st=%p\n", tt->a, tt->s, tt->st);
	printf("t_type tt1 a = %d : s=%s : st=%p\n", tt1->a, tt1->s, tt1->st);
	d = (char *) malloc(11 * sizeof(char));
	ft_memcpy(d, s, 10);
	printf("ft_memcpy:src = %s\ndest = %s\n", s, d);
	ft_memset(d, 88, 10);
	printf("ft_memset:dest = %s\n", d);
	ft_bzero(d, 10);
	printf("ft_bzero:dest = %s\n", d);
	return (0);
}
*/
