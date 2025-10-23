/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: red <red@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:53:08 by red               #+#    #+#             */
/*   Updated: 2025/10/22 20:53:57 by red              ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	if (!little || little[0] == '\0')
		return ((char *)big);
	i = 0;
	len++;
	while (big[i] && len-- > 0)
	{
		x = 0;
		if (big[i] == little[0])
		{
			while (big[i + x] == little[x] && (big[i + x] && little[x]) && len-- > 0)
				x++;
			if (x == ft_strlen((char *)little))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 10));
	
	return 0;
}
