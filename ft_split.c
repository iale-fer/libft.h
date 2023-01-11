/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:36:49 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/01/11 16:36:50 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
/* Esta función crea un contador el cual recorre la string, contando el número de secciones que tiene que debe de guardar 
en la memoria de esta. *s es la string original, y c es el limitador de caracteres.*/
static size_t	ft_wordcounter(char const *s, char c)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while(s[a] != '\0')
	{
		if(s[a] != c)
		{
			while(s[a] != '\0' && s[a] != c)
				a++;
				b++;
		}
		else a++;
	}
	return(b);
}

/*Esta función recorrerá la cadena hasta que llege a nulo u al delimitador. 
Comienza desde la posición del puntero que le asignes. Me retorna la dimensión 
que tendrá que ocupar cada celda de memoria*/
static size_t	ft_len(char const *s, char c)
{
	size_t len;

	len = 0;
	while(*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return(len);
}

/*Esta función a medida que recorre la string va liberando la memoria ocupada.*/
static void	ft_free(char **str)
{
	size_t a;

	a = 0;
	while(str[a])
	{
		free(str[a]);
		a++;
	}
	free(str);
}

/*Esta función se encarga de atravesar cada elemento de la cadena y comprobar que
está correctamente guardado, así hasta llegar a nuestro delimitador o null. 
En caso de que no sea así, se volverá a empezar*/
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
