/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:33:44 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/01/23 19:13:18 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char	*temp1;
	char	*temp2;
	size_t	i;

	i = 0;
	temp1 = (char *) str1;
	temp2 = (char *) str2;
	if (!str1 && !str2)
		return (0);
	while (i < n)
	{
		temp1[i] = temp2[i];
		i++;
	}
	return (str1);
}
