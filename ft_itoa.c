/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:38:10 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/17 17:48:21 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen_base(unsigned int value, int base)
{
	int	len;

	len = 0;
	if (value == 0)
		return (1);
	while (value > 0)
	{
		value /= base;
		len++;
	}
	return (len);
}

static char	*ft_itoa_base(unsigned int value, int base)
{
	char	*digits;
	char	*result;
	int		len;

	digits = ft_strdup("0123456789abcdef");
	if (!digits)
		return (NULL);
	len = ft_nlen_base(value, base);
	result = (char *)malloc(len + 1);
	if (!result)
	{
		free(digits);
		return (NULL);
	}
	result[len] = '\0';
	while (value > 0)
	{
		result[--len] = digits[value % base];
		value /= base;
	}
	free(digits);
	return (result);
}

char	*ft_itoa(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		return (ft_strjoin("-", ft_itoa_base(-(unsigned int)n, 10)));
	return (ft_itoa_base((unsigned int)n, 10));
}
/*
int main()
{
    printf("ft_itoa(0)       = %s\n", ft_itoa(0));
    printf("ft_itoa(123)     = %s\n", ft_itoa(123));
    printf("ft_itoa(-456)    = %s\n", ft_itoa(-456));
    printf("ft_itoa(INT_MAX) = %s\n", ft_itoa(INT_MAX));
    printf("ft_itoa(INT_MIN) = %s\n", ft_itoa(INT_MIN));

    return 0;
}
*/
