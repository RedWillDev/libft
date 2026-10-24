/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:37:20 by red          #+#    #+#             */
/*   Updated: 2026/10/19 15:37:20 by red          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putlong_fd(long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putlong_fd(n / 10, fd);
	ft_putchar_fd((char)('0' + n % 10), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putlong_fd((long)n, fd);
}
