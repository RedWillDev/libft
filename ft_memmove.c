/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:21:46 by red               #+#    #+#             */
/*   Updated: 2025/10/22 19:21:47 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	unsigned char	*dst;
	unsigned char	*src;

	if (!destination && !source)
		return (dst);
	src = (unsigned char *)source;
	dst = (unsigned char *)destination;
	if (dst > src)
	{
		while (size > 0)
		{
			dst[size] = src[size];
			size--;
		}
	}
	else
	{
		while (size > 0)
		{
			*(src++) = *(dst++);
			size--;
		}
	}
	return (dst);
}
