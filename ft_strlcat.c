/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:21:52 by red               #+#    #+#             */
/*   Updated: 2025/10/25 18:18:53 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	if (!src)
		return (0);
	i = ft_strlen(dst);
	x = 0;
	while (src[x] && size > 0)
	{
		dst[i] = src[x];
		x++;
		i++;
		size--;
	}
	dst[ft_strlen(dst)] = '\0';
	return (ft_strlen(src));
}

/* int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	char dest[50] = "pqrstuvwxyz";
	char src[] = "abcd";
	printf("strlcat returned %ld \n", ft_strlcat(dest, src, 1));
	printf("Resulting string: %s\n", dest);
	return 0;
} */

