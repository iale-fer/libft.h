/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:13:18 by iale-fer          #+#    #+#             */
/*   Updated: 2023/01/23 19:57:49 by ivanalefern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
/*C libraryes*/
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*		FIRST PART OF PROYECT!		*/

/*Is a function that is used to check if a given character is an alphabetic 
character or not. The function takes in an integer 
value representing the character to be checked and returns a non-zero 
value if the character is an alphabetic 
character,and 0 if it is not.*/
int		ft_isalpha(int c);

/*Is a function that is used to check if a given character is a 
digit or not. The function takes in an integer value representing 
the character to be checked and returns a non-zero value if the 
character is a digit, and 0 if it is not.*/
int		ft_isdigit(int c);

/* Is a function that is used to check if a given character 
is an alphabetic or numeric character.
The function takes in an integer value representing the character 
to be checked and returns a non-zero value if the character is an 
alphabetic or numeric character, and 0 if it is not.*/
int		ft_isalnum(int c);

/*Is a function that is used to check if a given character 
is an ASCII character or not.The function takes in an integer 
value representing the character to be checked and returns 
a non-zero value if the character is an ASCII character, and 
0 if it is not.ASCII (American Standard Code for Information 
Interchange) is a character encoding standard 
that assigns unique integers to specific characters, 
such as letters, digits, punctuation marks, 
and control codes. ASCII characters range from 0 to 127.*/
int		ft_isascii(int c);

/*is a function that is used to check if a given character 
is a printable character or not.
The function takes in an integer value representing the character
to be checked and returns
a non-zero value if the character is a printable character, 
and 0 if it is not.
Printable characters are characters that can be printed on a 
screen or written on a piece 
of paper, as opposed to control characters, which are used to 
control the behavior of a device.In the ASCII character set, 
printable characters have values between 32 and 126.*/
int		ft_isprint(int c);

/*s a function that is used to find the length of a 
given string.The function takes in a string and returns 
the number of characters in the string, not including the null 
terminator.the implementation of this function is usually done 
by iterating through the string and counting the number of 
characters until the null terminator is encountered.*/
size_t	ft_strlen(const char *s);

/*Is a function that is used to convert a given 
lowercase character to uppercase. The function takes in an 
integer value representing the character to be converted, 
and returns the corresponding uppercase character if the 
input is a lowercase letter, otherwise it returns the same input.*/
int		ft_toupper(int a);

/*is a function that is used to convert a given uppercase 
character to lowercase. The function takes in an integer value 
representing the character to be converted, 
and returns the corresponding lowercase character if 
the input is an uppercase letter, 
otherwise it returns the same input.*/
int		ft_tolower(int b);

/*Is a function that is used to set all the bytes of 
a given memory area to zero. The function takes in a 
pointer to a memory area and the number of bytes to be set to zero.
It can also be used for initializing variables that hold 
arrays of bytes, like strings.*/
void	ft_bzero(void *s, size_t n);

/*Is a function that is used to set a specific value for all 
the bytes of a given memory 
area.The function takes in a pointer to a memory area, 
the value to be set and the number 
of bytes to be set.*/
void	*ft_memset(void *b, int c, size_t len);

/*Is a function that is used to copy a specified 
number of bytes from one memory 
location to another. The function takes in three 
arguments: the destination memory 
location, the source memory location, and the number of bytes 
to be copied.*/
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*Is a function that is used to copy a specified number 
of bytes from one memory location to another, even if the
source and destination regions overlap.
The function takes in three arguments: the destination 
memory location, the source 
memory location, and the number of bytes to be copied.*/
void	*ft_memmove(void *dst, const void *src, size_t len);

/*is a function that is used to copy a string to another memory location.
The function takes in three arguments: the destination memory 
location, the source string, and the maximum number of bytes to 
be copied. It returns the total length of the source string.It 
can be used to copy a string from one buffer
to another, but with a specified maximum size to be copied.*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/*is a function that is used to append a string to another 
memory location. The function takes in three arguments: the 
destination memory location, the 
source string, and the maximum number of bytes to be appended. 
It returns the total length of the destination string after 
appending the source string.*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*Is a function that is used to find the first 
occurrence of a specific character 
in a given string. The function takes in two 
arguments: the string and the character 
to be searched for. It returns a pointer to the first 
occurrence of the character in 
the string, or a null pointer if the character is not found.*/
char	*ft_strchr(const char *s, int c);

/*Is a function that is used to find the last 
occurrence of a specific character in a 
given string. The function takes in two arguments: the 
string and the character to be searched for. It returns a 
pointer to the last occurrence of the character in the string, 
or a null pointer if the character is not found.*/
char	*ft_strrchr(const char *s, int c);

/* is a function that is used to compare a specified 
number of characters of two strings.The function takes in 
three arguments: the two strings to be compared and the number of 
characters to be compared. It returns an integer value indicating the 
result of the comparison.*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*Is a function that is used to search for the first occurrence of 
a specific byte value in a given he function takes in three 
arguments: a pointer to the memory area, the byte value to be searched for, 
and the number of bytes to be searched. It returns a pointer to the 
first occurrence of the byte value 
in the memory area, or a null pointer if the byte value is 
not found memory area.*/
void	*ft_memchr(const void *s, int c, size_t n);

/*is a function that is used to compare a specified number 
of bytes of two memory areas.The function 
takes in three arguments: the two memory areas to be compared 
and the number of bytes to be compared. 
It returns an integer value indicating the result of the comparison*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*Is a function that is used to locate a substring within a string, 
but only searching at most a specified number of characters. The 
function takes in three arguments: the string to search in, 
the substring to search for, and the number of characters to 
search at most. It returns a pointer to the first occurrence 
of the substring in the string, or a null pointer if the substring 
is not found.*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/*Is a function that is used to convert a given string 
of characters representing an integer value to its corresponding 
numerical value.he function takes in a string as an argument and 
returns the corresponding integer value.*/
int		ft_atoi(const char *str);

/*Is a function that is used to allocate a block of 
memory and set all its bytes to zero. The function takes in two 
arguments: the number of elements to be allocated and the size 
of each element. It returns a pointer to the first byte of the 
allocated memory block.*/
void	*ft_calloc(size_t count, size_t size);

/*Is a function that is used to create a new copy 
of a given string. The function takes in a string as 
an argument and returns a pointer to a new copy of the string allocated 
on the heap using malloc.*/
char	*ft_strdup(const char *s);

/*		SECOND PART OF THE PROYECT!		*/

/*Is a function that is used to extract a substring 
from a given string. The function 
takes in three arguments: the original string, 
the starting index of the substring, and 
the number of characters to be included in the 
substring. It returns a pointer to a new string, 
which is the substring extracted from the original string.*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*Is a function that is used to concatenate two strings 
together into a new string. The function 
takes in two strings as arguments and returns a 
pointer to a new string, which is the result of 
concatenating the two input strings.*/
char	*ft_strjoin(char const *s1, char const *s2);

/*Is a function that is used to remove specified 
characters from the beginning and end of a 
given string. The function takes in one argument: 
the original string, and an additional argument 
that is a string of characters to be removed. 
It returns a pointer to a new string, which is the 
original string with the specified characters 
removed from the beginning and end.*/
char	*ft_strtrim(char const *s1, char const *set);

/*Is a function that is used to split a given 
string into an array of strings based on a 
specified delimiter. The function takes in two 
arguments: the original string, and the delimiter 
character used to split the string. It returns a 
pointer to an array of strings, which is the 
resultof splitting the original string based 
on the delimiter character.*/
char	**ft_split(char const *s, char c);

/*Is a function that is used to convert an 
integer value to its corresponding string
representation. The function takes in an integer 
value and returns a pointer to a new 
string, which is the string representation 
of the integer value.*/
char	*ft_itoa(int n);

/*s a function that applies a given function 
to each character of a string, and returns a 
new string with the modified characters. It 
takes in two arguments: a pointer to the original 
string, and a function pointer that takes an int 
(the index of the character in the original string) 
and a char (the character itself) and returns a char. 
The returned string is allocated on the heap, 
and it's important to free it after use to 
avoid memory leaks. The original string is not modified by 
this function.*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*is a function that applies a given function to
each character of a string, but also passing the index 
of the character to the function. It takes in two 
arguments: a pointer to the original string, and a function 
pointer that takes an unsigned int (the index of the 
character in the original string) and a char pointer 
(the character itself) as arguments and void return type.*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/*s a function that is used to write a single 
character to a file descriptor. It is typically used in the
C programming language and is included in the library 
"libft" (a library of basic functions for the C 
programming language). The function takes in two 
arguments: the character to be written, and the file 
descriptor to which the 
character should be written.*/
void	ft_putchar_fd(char c, int fd);

/*Is a function that is used to write a 
null-terminated string to a file descriptor.
The function takes in two arguments: the string to 
be written, and the file descriptor 
to which the string should be written.*/
void	ft_putstr_fd(char *s, int fd);

/*Is a function that is used to write a 
null-terminated string to a file descriptor, 
followed by a newline character. 
The function takes in two arguments: the string 
to be written, and the file descriptor to which the string 
should be written.*/
void	ft_putendl_fd(char *s, int fd);

/*Is a function that is used to write an integer 
to a file descriptor. The function takes in two 
arguments: the integer to be written, and the file 
descriptor to which the integer should be written.*/
void	ft_putnbr_fd(int n, int fd);

/*		BONUS		*/

/*Is a function that is used to create a new link 
in a linked list. The function takes in one 
argument: the content of the new link and its 
size. It returns a pointer to the new link, 
which is an instance of the t_list struct.*/
t_list	*ft_lstnew(void *content);

/*Is a function that is used to add a new 
link to the front of a linked list. The function 
takes in two arguments: a pointer to a pointer 
of the beginning of the linked list, and a pointer 
to the new link that should be added to the front 
of the list.*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/*Is a function that is used to return the number of links in a 
linked list. The function takes in one argument: a pointer to 
the beginning of the linked list. It returns an unsigned int 
representing the number of links in the list.*/
int		ft_lstsize(t_list *lst);

/*Is a function that is used to return a pointer to the 
last link of a linked list. The function takes in one 
argument: a pointer to the beginning of the linked list. 
It returns a pointer to the last link of the list.*/
t_list	*ft_lstlast(t_list *lst);

/*Is a function that is used to add a new link to the 
end of a linked list. The function takes in two 
arguments: a pointer to a pointer of the beginning 
of the linked list, and a pointer to the new link that 
should be added to the end of the list.*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/*Is a function that is used to delete a single link 
from a linked list and free the memory allocated for it.
The function takes in two arguments: a pointer to the link 
that should be deleted and a pointer to a function that is 
used to free the memory allocated for the link's content.*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/*is a function that is used to delete all the links from 
a linked list and free the memory allocated for them. 
The function takes in two arguments: a pointer to a pointer 
of the beginning of the linked list and a pointer to a function 
that is used to free the memory allocated for each link's content.*/
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**/
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif