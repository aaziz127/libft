/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:38:10 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/20 01:14:00 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_res(char *result, int len, long num, int neg)
{
	int	i;

	i = len -1;
	result[len] = '\0';
	if (num == 0)
	{
		result[i] = '0';
		return ;
	}
	while (num > 0)
	{
		result[i] = num % 10 + '0';
		num /= 10;
		i--;
	}
	if (neg)
		result[i] = '-';
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		is_neg;
	long	num;

	is_neg = 0;
	if (n < 0)
	{
		is_neg = 1;
		num = -(long)n;
	}
	else
		num = (long)n;
	len = ft_numlen(n);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	fill_res(result, len, num, is_neg);
	return (result);
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
