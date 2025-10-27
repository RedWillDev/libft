/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:40:27 by red               #+#    #+#             */
/*   Updated: 2025/10/27 14:34:55 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
  char *ptr;

  ptr = (char *)malloc((len + 1) * sizeof(char));
  if (!ptr)
    return (NULL);
	ft_strlcpy(ptr, &s[start], len);
  return (ptr);
}
