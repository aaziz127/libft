/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:25:30 by alaziz            #+#    #+#             */
/*   Updated: 2025/06/18 17:51:04 by alaziz           ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_recursive(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_recursive(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	ft_putnbr_recursive(n, fd);
}
/*
int main(void)
{
    // Test ft_putchar_fd
    ft_putchar_fd('A', STDOUT_FILENO); // Affiche 'A'
    ft_putchar_fd('\n', STDOUT_FILENO); // Affiche 'A'

    // Test ft_putstr_fd
    ft_putstr_fd("Hello World!", STDOUT_FILENO); // Affiche "Hello World!"
    ft_putchar_fd('\n', STDOUT_FILENO); // Affiche 'A'

    // Test ft_putnbr_fd
    ft_putnbr_fd(-42, STDOUT_FILENO); // Affiche "-42"
    ft_putchar_fd('\n', STDOUT_FILENO);

    // Test ft_putendl_fd
    ft_putendl_fd("Ceci est une ligne.", STDOUT_FILENO);

    return (0);
}
*/
