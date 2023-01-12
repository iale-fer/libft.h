/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iale-fer <iale-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:13:18 by iale-fer          #+#    #+#             */
/*   Updated: 2023/01/12 19:27:55 by iale-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
/*C libraryes*/
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*	FIRST PART OF PROYECT!*/

/*Me dice si el caracter es alfabético*/
int		ft_isalpha(int c);

/*Me dice si el caracter es numérico*/
int		ft_isdigit(int c);

/*Hace las funciones isdigit e isalpha a la vez*/
int		ft_isalnum(int c);

/*Me dice si el valo está en la tabla ascii*/
int		ft_isascii(int c);

/*Me dice si mi caracter es imprimible*/
int		ft_isprint(int c);

/*Me dice el tamaño de mi string*/
size_t	ft_strlen(const char *s);

/*Convierte las minúsculas a mayúsculas*/
int		ft_toupper(int c);

/*Convierte las mayúisculas a minúsuclas*/
int		ft_tolower(int c);

/*Convierte la función en nulo*/
void	ft_bzero(void *s, size_t n);

/*La función memset copia el valor de c a cada uno de los 
primeros n caracteres en el objeto al cual señala s.*/
void	*ft_memset(void *b, int c, size_t len);

/*Copia los primeros n caracteres del objeto apuntado por s2 a s1*/
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*Copia los datos primero a un búfer intermedio, luego del búfer al destino. */
void	*ft_memmove(void *dst, const void *src, size_t len);

/*La función strcpy copia la cadena a la cual 
señala s2 (incluyendo el carácter nulo de terminación) al arreglo 
al cual señala s*/
size_t	ft_strlcpy(char *dst,
			const char *src,
			size_t dstsize);

/*Permite añadir un bloque de memoria a otro*/
size_t	ft_strlcat(char *dst,
			const char *src,
			size_t dstsize);

/*La strchr función busca la primera aparición del caracter en str , o devuelve NULL si no se encuentra. */
char	*ft_strchr(const char *s, int c);

/*La función strrchr encuentra la última repetición de c (convertida en char ) en str */
char	*ft_strrchr(const char *s, int c);

/*Compara dos strings*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*La función memchr devuelve un apuntador al caracter 
localizado, o un apuntador nulo si el carácter no existe en el objeto.*/
void	*ft_memchr(const void *s, int c, size_t n);

/*Compara los n caracteres de una cadena*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/*Devuelve un valor convertido, en función de 
la suma de signos '+' y '-' este será postivio o negativo*/
int		ft_atoi(const char *str);

/*Reserva un espacio de almacenamiento a una matriz*/
void	*ft_calloc(size_t count, size_t size);

/*Devuelve un puntero a una nueva cadena de 
caracteres que es un duplicado de la cadena apuntada por s*/
char	*ft_strdup(const char *s);

/*		SECOND PART OF THE PROYECT!		*/

/**/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**/
char	*ft_strjoin(char const *s1, char const *s2);

/**/
char	*ft_strtrim(char const *s1, char const *set);

/**/
char	**ft_split(char const *s, char c);

/**/
char	*ft_itoa(int n);

/**/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**/
void	ft_striteri(char *s, void (*f)(unsigned int,char*));

/**/
void	ft_putchar_fd(char c, int fd);

/**/
void	ft_putstr_fd(char *s, int fd);

/**/
void	ft_putendl_fd(char *s, int fd);

/**/
void	ft_putnbr_fd(int n, int fd);

/*
 * BONUS
*/
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst,
			void *(*f)(void *), void (*del)(void *));
#endif