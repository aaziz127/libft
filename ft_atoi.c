/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:49:40 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/23 15:01:51 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static int	get_sign(const char **str)
{
	int	sign;

	sign = 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	while (ft_isspace(*str))
		str++;
	sign = get_sign(&str);
	while (ft_isdigit(*str))
	{
		if (sign == 1 && result > (LONG_MAX - (*str - '0')) / 10)
			return (INT_MAX);
		if (sign == -1 && (-result) < (LONG_MIN + (*str - '0')) / 10)
			return (INT_MIN);
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * sign));
}
/*
int	main(void)
{
	printf("Test ft_atoi:\n");
	printf("ft_atoi'   123' -> %d\n", ft_atoi("   123"));
	printf("atoi'   123' -> %d\n", atoi("   123"));
	printf("ft_atoi'  -456' -> %d\n", ft_atoi("  -456"));
	printf("atoi'  -456' -> %d\n", atoi("  -456"));
	printf("ft_atoi'   -  456' -> %d\n", ft_atoi("  -  456"));
	printf("atoi'   -  456' -> %d\n", atoi("  -  456"));
	printf("ft_atoi'  +789' -> %d\n", ft_atoi("  +789"));
	printf("atoi'  +789' -> %d\n", ft_atoi("  +789"));
	printf("ft_atoi'abc123' -> %d\n", ft_atoi("abc123"));
	printf("atoi'abc123' -> %d\n", atoi("abc123"));
	printf("ft_atoi'2147483647' -> %d\n", ft_atoi("2147483647"));
	printf("atoi'2147483647' -> %d\n", atoi("2147483647"));
	printf("ft_atoi'-2147483648' -> %d\n", ft_atoi("-2147483648"));
	printf("atoi'-2147483648' -> %d\n", atoi("-2147483648"));
	printf("ft_atoi'2147483648' -> %d\n", ft_atoi("2147483648"));
	printf("atoi'2147483648' -> %d\n", atoi("2147483648"));
	printf("ft_atoi'   \t\n\r\v\f123' -> %d\n", ft_atoi("   \t\n\r\v\f123"));
	printf("atoi'   \t\n\r\v\f123' -> %d\n", atoi("   \t\n\r\v\f123"));
	printf("ft_atoi'' -> %d\n", ft_atoi(""));
	printf("atoi'' -> %d\n", atoi(""));
	return (0);
}
*/
