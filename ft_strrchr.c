/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:22:44 by red               #+#    #+#             */
/*   Updated: 2025/10/22 19:22:45 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*strrchr(const char *string, int searchedChar)
{
	size_t	i;

	i = ft_strlen((char *)string);
	while (i > 0 && string[i] != (char)searchedChar)
		i--;
	return ((char *)&string[i]);
}
