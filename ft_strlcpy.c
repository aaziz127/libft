/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 09:33:57 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/12 10:20:27 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

/*
* The strlcpy() function copies up to size - 1 characters 
* from the NUL-terminated string src to dst,
* NUL-terminating the result.
* return:For strlcpy() that means the length of src.
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size)
	{
		while (i < (size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(int argc, char *argv[])
{
	char	*dest = malloc(42);
	char	*src = NULL;
	size_t	size = 3;
	
	if (argc == 2)
		src = argv[argc - 1];
	else if (argc == 3)
	{
		src = argv[argc - 2];
		size = atoi(argv[argc - 1]);
	}
	else
	{
		printf("Usage: %s [src] [size]\n", argv[0]);
		return (0);
	}
	printf("ft_strlcpy(dest, '%s', %ld)\n", src, size);
	printf("dest => '%s'\t\t| length => %ld\n", dest,\
	ft_strlcpy(dest, src, size));
	printf("\nstrlcpy(dest, '%s', %ld)\n", src, size);
	printf("dest => '%s'\t\t| length => %ld\n", dest,\
	strlcpy(dest, src, size));
	return (0);
}
*/
