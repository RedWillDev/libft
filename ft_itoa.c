/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:53:14 by red               #+#    #+#             */
/*   Updated: 2025/10/25 17:39:43 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <math.h>



char *ft_itoa(int n)
{
	size_t num;
	char *ptr;
	char nu[1];
	size_t numlen;
	
	num = (size_t)n;
	numlen = 1;
	while ((num/10) > 1)
		numlen++;
	if(!(ptr = malloc(numlen * sizeof(char ))))
		return NULL;
	if (n < 0)
		ptr[0] = '-';
	if (num > 0 && num <= 9)
	{
		nu[0] = (num % 10) + '0';
		ft_strlcat(ptr, nu, 1);
	}
	else
		ft_itoa((int)num / 10);
	return(ptr);
}

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	printf("itoa returned %s \n", ft_itoa(10));
	return 0;
}
