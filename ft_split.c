/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iale-fer <iale-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:36:49 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/01/12 19:15:22 by iale-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
/*This function creates a counter which runs through the 
string, counting the number of sections it has to store in memory. 
in the string's memory. *s is the original string, and c 
is the character limiter.*/
static size_t	ft_wordcounter(char const *s, char c)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		if (s[a] != c)
		{
			while (s[a] != '\0' && s[a] != c)
				a++;
				b++;
		}
		else
		a++;
	}
	return (b);
}

/*This function will traverse the string until it reaches 
null or the delimiter. 
It starts from the position of the pointer you assign to it. 
It returns the dimension 
that each memory cell will have to occupy.*/
static size_t	ft_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

/*As the function traverses the string, it frees the occupied memory.*/
static void	ft_free(char **str)
{
	size_t	a;

	a = 0;
	while (str[a])
	{
		free(str[a]);
		a++;
	}
	free(str);
}

/*This function is responsible for traversing each element of 
the string and checking that it is correctly stored 
that it is correctly stored, until it reaches our delimiter or null. 
If this is not the case, it will start over again.*/
static char	**ft_make_cells(char **str, char *s, char c)
{
	size_t	len;
	size_t	n;

	n = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = ft_len(s, c);
			s = s + len;
			str[n] = ft_substr(s - len, 0, len);
			if (str[n] == NULL)
			{
				ft_free(str);
				return (NULL);
			}
			n++;
		}
		else
			s++;
	}
	str[n] = NULL;
	return (str);
}
