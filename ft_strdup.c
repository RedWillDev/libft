/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:46:20 by red               #+#    #+#             */
/*   Updated: 2025/10/23 16:03:05 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdio.h>

char *ft_strdup(const char *source)
{
  char *ptr;

  if (!(ptr = (char *)malloc(ft_strlen(source) * sizeof(char))))
    return (NULL);
  ft_strlcpy(ptr, source, ft_strlen(source));
  return(ptr);
}
