/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:39:15 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/01/11 16:39:16 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main()
{
    //tenemos dos formas de hacerlo:
    char a[20]="Program";
    //char b[20]={'P','r','o','g','r','a','m','\0'};

    printf("Tamaño de la string a = %i \n",ft_strlen(a));
   // printf("Length of string b = %i \n",ft_strlen(b));

    return 0;
}