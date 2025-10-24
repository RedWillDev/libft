/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:36:47 by red               #+#    #+#             */
/*   Updated: 2025/10/24 14:50:08 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
  if(ft_strchr(set, s1[0]) != NULL && ft_strchr(set, s1[ft_strlen(s1) - 1]) != NULL)
    return(ft_strdup())
}
