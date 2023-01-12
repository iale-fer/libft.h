/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:46:38 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/01/11 15:46:39 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit( int c)
{
    if(c >= '0' && c <= '9')
    {
        return (1);
    }
    else return (0);
}