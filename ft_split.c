/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:53:22 by red               #+#    #+#             */
/*   Updated: 2025/10/24 20:38:01 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char **ft_split(char const *s, char c)
{
  char **ptr;
  char *str;
  char c2[0];
  size_t i;
  size_t x;

  if (!(ft_strchr(s, c)) )
    return NULL;
  c2[0] = c;
  str = ft_strtrim(s, c2);
  i = 0;
  while (str[i] == c)
    i++;
  i *= 2;
  x = ft_strlen(s);
  if (!(ptr = ft_calloc(i, sizeof(char *))))
    return (NULL);
  while (i > 0)
  {
    if (str[x] == c)
      i--;
    else
      ptr[i]= ft_substr(str, x, ft_strlen(str) - x);
    x--;
  }
  return (ptr);
}

// cree une boucle pour allouer plusieur tableau >> determine le nom de str finaux >>
// >> allouer le tab de tab en avec le nombre de tableau >> allouer les tableau en question avec le nombre de characté * (char *) >>
// retourné le tab de tab.

// utilisé ft_strtrim pour vité eux du debut

// récupéré l'addresse de x et faie un substr pour importé automatique le str avec la bonne taille

int main(int argc, char const *argv[])
{
  (void)argc;
  char **ptr = ft_split(argv[1], argv[2][0]);
  if (ptr)
  {
    while (*ptr)
    {
      printf("str: %s\n", *ptr);
      ptr++;
    }
  } else {
    printf("NULL\n");
  }
  return 0;
}
