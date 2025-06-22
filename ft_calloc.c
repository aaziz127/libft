/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 19:45:43 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/22 21:37:22 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (size && nmemb > (SIZE_MAX / size))
		return (NULL);
	total = nmemb * size;
	if (total == 0)
		total = 1;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*
int	main(void)
{
	int	*arr;
	int *arr1;
	int	*arr2;
	int *arr3;

	arr = ft_calloc(5, sizeof(int));
    arr1 = ft_calloc(5, sizeof(int));
    arr2 = ft_calloc(0, sizeof(int));
    arr3 = ft_calloc(1000000000, 1000000000);

    printf("Test 1: %p\n", arr1);
    printf("Test 2: %p\n", arr2);
    printf("Test 3: %p\n", arr3); // Should be NULL due to overflow

    for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]); // Should print 0 0 0 0 0
	}
	free(arr);
	free(arr1);
	free(arr2);
	free(arr3);

    return (0);
}
*/
