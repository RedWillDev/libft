/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:00:30 by red               #+#    #+#             */
/*   Updated: 2025/10/25 15:49:09 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char *ptr;

	if (!(ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
  ft_strlcpy(ptr, s1, ft_strlen(s1));
  ft_strlcat(ptr, s2, ft_strlen(s2));
  return ptr;
}
