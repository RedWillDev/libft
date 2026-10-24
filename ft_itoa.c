/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:37:20 by red          #+#    #+#             */
/*   Updated: 2026/10/19 15:37:20 by red          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n <= -10 || n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*out;

	num = (long)n;
	len = ft_numlen(num);
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	out[len] = '\0';
	if (num < 0)
	{
		out[0] = '-';
		num = -num;
	}
	while (num >= 10)
	{
		out[--len] = (char)('0' + num % 10);
		num /= 10;
	}
	out[--len] = (char)('0' + num);
	return (out);
}
