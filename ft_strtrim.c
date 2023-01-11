/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:42:14 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/01/11 16:42:17 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len_s1;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	len_s1 = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[len_s1]) && len_s1 != 0)
		len_s1--;
	return (ft_substr((char *)s1, 0, len_s1 + 1));
}