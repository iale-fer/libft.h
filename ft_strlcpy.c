/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:39:01 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/01/23 18:16:14 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	aux;
	char	*ps;

	ps = (char *)src;
	aux = ft_strlen(src);
	if (dstsize == 0)
		return (aux);
	else
	{
		i = 0;
		while (ps[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = ps[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (aux);
}
