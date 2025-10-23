/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:40:27 by red               #+#    #+#             */
/*   Updated: 2025/10/23 16:59:24 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
  char *ptr;

  if (!(ptr = (char *)malloc(len * sizeof(char))))
    return (NULL);
	ft_strlcpy(ptr, &s[start], len);
  return (ptr);
}
