/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:22:37 by red               #+#    #+#             */
/*   Updated: 2025/10/22 19:22:38 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	ft_tolower(int character)
{
	if (ft_isascii(character) && (character >= 65 && character <= 90))
		character += 32;
	else
		return (0);
	return (character);
}
