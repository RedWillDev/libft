/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:21:52 by red               #+#    #+#             */
/*   Updated: 2025/10/23 17:35:53 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdio.h>

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int x;

	if (!src)
		return (0);
	i = ft_strlen(dst);
	x = 0;
	while (src[x] && size > 0)
	{
		dst[i] = src[x];
		printf("dst: %s\n", dst);
		x++;
		i++;
		size--;
	}
	dst[ft_strlen(dst)] = '\0';
	return (ft_strlen(dst));
}
