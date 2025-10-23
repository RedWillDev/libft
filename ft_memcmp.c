/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:37:55 by red               #+#    #+#             */
/*   Updated: 2025/10/22 19:52:13 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
  unsigned char *ptr1;
  unsigned char *ptr2;
  size_t			i;
  
  ptr1 = (unsigned char *)pointer1;
  ptr2 = (unsigned char *)pointer2;
  i = 0;
  while (size-- > 0)
  {
    if (ptr1[i] != ptr2[i])
      return ((unsigned char)ptr1[i] - (unsigned char)ptr2[i]);
    i++;
  }
  return (0);
}
