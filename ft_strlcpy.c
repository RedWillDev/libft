/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:21:56 by red               #+#    #+#             */
/*   Updated: 2025/10/22 19:22:10 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	if (!src)
		return (0);
	i = 0;
	while (size > 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
