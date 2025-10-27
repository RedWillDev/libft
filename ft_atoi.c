/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:19:33 by red               #+#    #+#             */
/*   Updated: 2025/10/27 14:50:36 by red              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *theString)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	if (theString[0] == '-')
		i++;
	while (theString[i] && ft_isdigit(theString[i]))
	{
		value = (value * 10) + (theString[i] - '0');
		i++;
	}
	if (theString[0] == '-')
		return (-value);
	else
		return (value);
}
