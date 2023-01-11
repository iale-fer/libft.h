/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:43:48 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/01/11 15:43:49 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *b, size_t n)
{
	size_t counter;
	counter = 0;
	while(n != 0 && counter++ <= (n-1))
	{
	*(char *)b = '\0';
	b++;
	}

}