/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 20:48:14 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/18 23:35:21 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//char	f(unsigned int ind, char c);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;
	size_t	slen;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	dest = malloc(slen + 1);
	if (!dest)
		return (NULL);
	while (i < slen)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
char	upper(unsigned int index, char c)
{
	(void)index;
	return (ft_toupper(c));
}

char	lower(unsigned int index, char c)
{
	(void)index;
	return (ft_tolower(c));
}

int	main(int argc, char **argv)
{
    if (argc != 3)
	{
        printf("Usage: %s <str> <u|U|l|L>\n", argv[0]);
        return (1);
    }

    const char	*input = argv[1];
	char		option = argv[2][0];
    char		*result = NULL;

    if (option == 'u' || option == 'U')
	{
        result = ft_strmapi(input, upper);
    }
	else if (option == 'l' || option == 'L')
	{
        result = ft_strmapi(input, lower);
    } else
	{
        printf("Erreur : Option invalide. Utilisez u/U\
		
		pour majuscules ou l/L pour minuscules.\n");
        return (1);
    }

    if (result == NULL)
	{
        printf("Erreur lors de l'allocation de mémoire.\n");
        return (1);
    }
    printf("Input: \"%s\"\n", input);
    printf("Output: \"%s\"\n", result);
    free(result);

    return (0);
}
*/
