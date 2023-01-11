/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:33:44 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/01/11 16:33:45 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
    str1 = 0;
    str2 = 0;
    if(!str1 && !str2)
        return(0);
    else
    if(str1 != str2)
    n++;
    return(str1);
}

int main ()
{
    char str1[55] = "holaaa"; 
    char str2[55] = "buenaas"; 
  /* Copies contents of str2 to str1 */
    ft_memcpy(str1, str2, sizeof(str1));
    printf("%s\n", str2);
    return(1);
}
