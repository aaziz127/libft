/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:58:42 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/11 21:13:31 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Checks if character is alphanumeric
// c	character to check
//return		SUCCESS(1)
//return		FAILURE(0)
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int	main(int argc, char *argv[])
{
	char	c = '*';
	
	if (argc == 2)
		c = argv[argc - 1][0];
	printf("isalnum(%c) => %i\n", c, isalnum(c));
	printf("ft_isalnum(%c) => %i\n", c, ft_isalnum(c));
}
*/
