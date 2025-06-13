/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:44:42 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/13 11:15:04 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//return the first occurence of c int s.
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Hellau, world!";
    char		*found = ft_strchr(str, 'o');

    if (found != NULL)
	{
        printf("Trouvé à l\'index : %ld\n", found - str); // Affiche 4
    } else
	{
        printf("Non trouvé\n");
    }
    return (0);
}
*/
