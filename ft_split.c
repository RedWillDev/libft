/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:53:22 by red               #+#    #+#             */
/*   Updated: 2025/10/25 16:51:56 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

static size_t	ft_wordcount(const char *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
			w++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (w);
}

static char **fill_that(char *src, char **dst, char c)
{
  size_t i;
  size_t x;
  size_t len;

  i = 0;
  x =  0;
  len = 0;
  while (src[i])
  {
    if ((src[i] == c) && (dst[x] = ft_substr(src, i - len, len)))
    {
        while (src[i] == c)
            i++;
        x++;
        len = 0;
    }
    else
    {
        i++;
        len++;
    }
  }
  if (len > 0)
    dst[x++] = ft_substr(src, i - len, len);
  return (dst);
}

char **ft_split(char const *s, char c)
{
  char **ptr;
  char *str;
  char c2[1];// a tej

  c2[0] = c;
  str = ft_strtrim(s, c2);
  if (!(ptr = ft_calloc(ft_wordcount(str, c), sizeof(char *))))
    return (NULL);
  return (fill_that(str, ptr, c));
}


// cree une boucle pour allouer plusieur tableau >> determine le nom de str finaux >>
// >> allouer le tab de tab en avec le nombre de tableau >> allouer les tableau en question avec le nombre de characté * (char *) >>
// retourné le tab de tab.

// utilisé ft_strtrim pour vité eux du debut

// récupéré l'addresse de x et faie un substr pour importé automatique le str avec la bonne taille

/* int main() {
    char str[] = "xxxHelloxxxworld!xxxxx";
    char **words = ft_split(str, 'x');

    if (words) {
        printf("Mots separes :\n");
        for (int i = 0; words[i] != NULL; i++) {
            printf("%s\n", words[i]);
            free(words[i]); // Libérer la mémoire allouée pour chaque mot
        }
        free(words); // Libérer la mémoire allouée pour le tableau de mots
    } else {
        printf("Erreur lors de l'allocation mémoire.\n");
    }
    return 0;
} */