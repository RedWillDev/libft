/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:21:33 by red               #+#    #+#             */
/*   Updated: 2025/10/22 19:21:34 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	unsigned char	*ptr;
	unsigned char	rsh;
	size_t			i;

	ptr = (unsigned char *)memoryBlock;
	rsh = (unsigned char)searchedChar;
	i = 0;
	while (i < size)
	{
		if (ptr[i] == rsh)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
