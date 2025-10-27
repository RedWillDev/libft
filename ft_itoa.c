/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:48:10 by red               #+#    #+#             */
/*   Updated: 2025/10/27 14:48:25 by red              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	numlen;
	long	num;
	char	*ptr;
	int		tmp;

	num = n;
	numlen = ft_numlen(n);
	ptr = (char *)malloc((numlen + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	tmp = 0;
	ptr[numlen] = '\0';
	if (num < 0)
	{
		ptr[0] = '-';
		tmp = 1;
		num = -num;
	}
	while (numlen-- != 0)
	{
		ptr[numlen + tmp] = (num % 10) + '0';
		num /= 10;
	}
	return (ptr);
}
