/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:08:48 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/01/23 18:09:22 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	int		i;
	char	*str;

	i = ft_strlen(s);
	str = (char *)s;
	x = (char) c;
	while (i >= 0)
	{	
		if (str[i] == x)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
