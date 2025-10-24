/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:36:47 by red               #+#    #+#             */
/*   Updated: 2025/10/24 18:54:34 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
  char *ptr;
  size_t i;

  i = 0;
  if(!(ptr = ft_strdup(s1)))
    return (NULL);
  while (ptr[i])
  {
    if (ft_strchr(set, ptr[i]) && ft_strchr(set, ptr[i+1]) == NULL && ft_strchr(set, ptr[0]))
    {
      if(!(ptr = ft_strdup(&ptr[i + 1])))
        return (NULL);
      i = 0;
    }
    if (ft_strchr(set, ptr[ft_strlen(ptr) - 1]) && ft_strchr(set, ptr[ft_strlen(ptr) - i - 2]) == NULL && ft_strchr(set, ptr[ft_strlen(ptr) - 1]))
      ft_strlcpy(ptr, ptr, ft_strlen(ptr) - i - 1);
    i++;
  }
  
  return(ptr);
}

int main(int argc, char const *argv[])
{
  (void)argc;
  (void)argv;
  printf("%s\n", ft_strtrim("sdxxxhellyeasxdhsxd", "sdx"));
  return 0;
}

