/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:40:35 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/13 16:09:35 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	negate;

	result = 0;
	negate = 0;
	while (!ft_isalnum(*(unsigned char *)nptr))
		nptr++;
	while (*(unsigned char *)nptr == '-' || *(unsigned char *)nptr == '+')
	{
		if (*(unsigned char *)nptr == '-')
			negate++;
		nptr++;
	}
	while (ft_isdigit(*(unsigned char *)nptr))
	{
		result = result * 10 + (*(unsigned char *)nptr - '0');
		nptr++;
	}
	if (negate % 2 == 1)
		return (result * (-1));
	return (result);
}

int	main(void)
{
	char	test1[] = "42";
    char	test2[] = "-42";
    char	test3[] = "+42";

    char	test4[] = "    a1234";
    char	test5[] = "    -5678";
    char	test6[] = "\t\n   9876j54";
    char	test7[] = "\v\f    -12345k6";
    char	test8[] = "2147483647";  // INT_MAX
    char	test9[] = "-2147483648"; // INT_MIN
    char	test10[] = "2147483648"; // Overflow case
    char	test11[] = "-2147483649"; // Underflow case
    printf("Test 1: '%s' -> %d\n", test1, ft_atoi(test1));  // 42
    printf("Test 2: '%s' -> %d\n", test2, ft_atoi(test2));  // -42
    printf("Test 3: '%s' -> %d\n", test3, ft_atoi(test3));  // 42
    printf("Test 4: '%s' -> %d\n", test4, ft_atoi(test4));  // 1234
    printf("Test 5: '%s' -> %d\n", test5, ft_atoi(test5));  // -5678
    printf("Test 6: '%s' -> %d\n", test6, ft_atoi(test6));  // 987654
    printf("Test 7: '%s' -> %d\n", test7, ft_atoi(test7));  // -123456
    printf("Test 8: '%s' -> %d\n", test8, ft_atoi(test8));  // 2147483647 (INT_MAX)
    printf("Test 9: '%s' -> %d\n", test9, ft_atoi(test9));  // -2147483648 (INT_MIN)
    printf("Test 10: '%s' -> %d\n", test10, ft_atoi(test10)); // 2147483647 (Overflow)
    printf("Test 11: '%s' -> %d\n", test11, ft_atoi(test11)); // -2147483648 (Underflow)
	return (0);
}
