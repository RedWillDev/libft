/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:22:46 by red               #+#    #+#             */
/*   Updated: 2025/10/22 19:22:47 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;

	i = 0;
	while (first[i] != second[i] && length-- > 0)
	{
		return ((unsigned char)first[i] - (unsigned char)second[i]);
	}
	return (0);
}
