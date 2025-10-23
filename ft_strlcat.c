/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:21:52 by red               #+#    #+#             */
/*   Updated: 2025/10/22 20:05:46 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;

	if (!src)
		return (0);
	i = 1;
	while (src[i] && size >= ft_strlen(dst))
	{
		dst[ft_strlen(dst) + i] = src[i - 1];
		i++;
		size--;
	}
	dst[ft_strlen(dst) + 1] = '\0';
	return (ft_strlen(dst));
}
