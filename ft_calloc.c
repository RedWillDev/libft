/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:31:33 by red               #+#    #+#             */
/*   Updated: 2025/10/23 15:44:27 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	void *ptr;

	if (!(ptr = (void *)malloc(elementCount * elementSize)))
		return (NULL);
	ft_bzero(ptr, elementCount * elementSize);
	return (ptr);
}
