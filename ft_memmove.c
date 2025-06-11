/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:48:54 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/11 15:36:47 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*ssrc;
	char	*temp;

	ssrc = (char *)src;
	dst = (char *)dest;
	temp = ssrc;
	ft_memcpy(temp, ssrc, n);
	ft_memcpy(dst, temp, n);
	return (dst);
}
