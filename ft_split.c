/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:53:22 by red               #+#    #+#             */
/*   Updated: 2025/10/24 18:59:41 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char **ft_split(char const *s, char c)
{
  char **ptr;

  if (!(ft_strchr(s, c)))
    return NULL;
  
}

// cree une boucle pour allouer plusieur tableau >> determine le nom de str finaux 
// >> allouer le tab de tab en avec le nombre de tableau >> allouer les tableau en question avec le nombre de characté * (char *) >>
// retourné le tab de tab.
