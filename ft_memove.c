/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:34:00 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/01/11 16:34:04 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)

{
	char	*dest;
	char	*src;

	if (!n || str1 == str2)
		return (str1);
	if (str1 > str2)
	{
		dest = (char *)str1 + n - 1;
		src = (char *)str2 + n - 1;
		while (n-- > 0)
			*dest-- = *src--;
	}
	else
	{
		dest = str1;
		src = (char *)str2;
		while (n-- > 0)
			*dest++ = *src++;
	}
	return (str1);
}

int main () 
{
	char dest[] = "antigua string";
	const char src[]  ="nueva stringgg";

	printf("Antes de que memmove dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 9);
	printf("Después de que memmove dest = %s, src = %s\n", dest, src);

	return(0);
}
