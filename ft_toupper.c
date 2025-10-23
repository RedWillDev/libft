/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:22:34 by red               #+#    #+#             */
/*   Updated: 2025/10/22 19:22:35 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	ft_toupper(int character)
{
	if (ft_isascii(character) && (character >= 97 && character <= 122))
		character -= 32;
	else
		return (0);
	return (character);
}
