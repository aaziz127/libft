/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 12:51:24 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/13 15:30:23 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (little[j] == big[i + j] && little[j] != '\0')
		{
			if ((i + j) < len && big[i + j] != '\0')
				j++;
			else
				break ;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Baz";
	size_t		l = 15;
	char		*found;

	found = ft_strnstr(largestring, smallstring, l);
	if (found != NULL)
	{
		printf("%s:found at index:%ld in:\'%s\'\n", \
		smallstring, found - largestring, largestring);
	}
	else
	{
		printf("%s:Not found in :%ld characters of:\'%s\'\n", \
		smallstring, l, largestring);
	}
    found = strnstr(largestring, smallstring, l);
	if (found != NULL)
	{
		printf("%s:foud at index:%ld in:\'%s\'\n", \
		smallstring, found - largestring, largestring);
	}
	else
	{
		printf("%s:Not found in :%ld characters of:\'%s\'\n", \
		smallstring, l, largestring);
	}
	return (0);
}
*/
