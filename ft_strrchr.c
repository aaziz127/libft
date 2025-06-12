/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 22:31:06 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/12 22:59:43 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (*(s++) != '\0')
		i++;
	i += 1;
	while (i >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "hello world in 42!";
	char	tofind = '4';
	char	*find;

	find = ft_strrchr(str, tofind);
	if (find != NULL)
		printf("%c: found at index: %ld in:\'%s\'\n", tofind, (find - str), str);
	else
		printf("%c: not found in:\'%s\'",tofind, str);
	return (0);
}
*/
