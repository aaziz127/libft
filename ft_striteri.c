/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 23:16:06 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/18 23:35:54 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	upper(unsigned int index, char *c)
{
	(void)index;
	*c = ft_toupper(*c);
}

void	lower(unsigned int index, char *c)
{
	(void)index;
	*c = tolower(*c);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
        printf("Usage: %s <str> <u|U|l|L>\n", argv[0]);
        return (1);
    }

    char input[100];
	strcpy(input, argv[1]);
	char option = argv[2][0];
    if (option == 'u' || option == 'U')
	{
        ft_striteri(input, upper);
    } else if (option == 'l' || option == 'L')
	{
        ft_striteri(input, lower);
    }
	else
	{
        printf("Erreur : Option invalide. Utilisez u/U\

		pour majuscules ou l/L pour minuscules.\n");
        return (1);
    }
    printf("Input: \"%s\"\n", argv[1]);
    printf("Output: \"%s\"\n", input);
    return (0);
}
*/
