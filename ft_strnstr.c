/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 12:51:24 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/17 19:17:34 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (j < (len - i) && little[j] == big[i + j] && little[j])
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = " ";
	size_t		l = 7;
	char		*found;

	found = ft_strnstr(largestring, smallstring, l);
	if (found != NULL)
	{
		printf("%s:ft_strnstr:found at index:%ld in:\'%s\'\n", \

		smallstring, found - largestring, largestring);
	}
	else
	{
		printf("%s:ft_strnstr:Not found in :%ld characters of:\'%s\'\n", 
		\
		smallstring, l, largestring);
	}
    found = strnstr(largestring, smallstring, l);
	if (found != NULL)
	{
		printf("%s:strnstr:foud at index:%ld in:\'%s\'\n", \

		smallstring, found - largestring, largestring);\

	}
	else
	{
		printf("%s:strnstr:Not found in :%ld characters of:\'%s\'\n", \

		smallstring, l, largestring);
	}
	return (0);
}
*/
