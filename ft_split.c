/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:36:49 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/01/23 18:17:12 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*This function creates a counter which runs through the 
string, counting the number of sections it has to store in memory. 
in the string's memory. *s is the original string, and c 
is the character limiter.*/
static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			w++;
		}
		else
			i++;
	}
	return (w);
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

/*
We create the memory pool of type char **. Its size shall be char * and 
the number of fragments it has calculated with the ft_wordcounter function
plus 1 to consider the last cell to be null. 
We check that it has been created correctly or we have been given the 
string, otherwise it would be null. 
Once everything is correct, in the return the main function will start 
to fill each cell with its corresponding substring.
*/
char	**ft_split(char const *s, char c)
{
	char	**str;

	str = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!str || !s)
		return (NULL);
	return (ft_make_cells(str, (char *)s, c));
}
