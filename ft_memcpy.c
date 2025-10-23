/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:21:40 by red               #+#    #+#             */
/*   Updated: 2025/10/23 17:18:20 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size )
{
	unsigned char	*dst;
	unsigned char	*src;

	if (!destination && !source)
		return (destination);
	src = (unsigned char *)source;
	dst = (unsigned char *)destination;
	while (size > 0)
	{
		*(src++) = *(dst++);
		size--;
	}
	return (dst);
}
