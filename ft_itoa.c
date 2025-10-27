/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:53:14 by red               #+#    #+#             */
/*   Updated: 2025/10/27 14:07:47 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char *ft_itoa(int n)
{
	long num;
	char *ptr;
	size_t numlen;
	int tmp;
	
	num = n;
	numlen = 1;
	while ((n /= 10) != 0)
		numlen++;
	if(!(ptr = malloc(numlen + 1* sizeof(char))))
		return NULL;
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
		ptr[numlen + tmp ] = (num % 10) + '0';
		num /= 10;
	}
	return(ptr);
}
