
NAME = libft.a

SRCS = \
	ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_strdup.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_bzero.c ft_strchr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c \
	ft_strncmp.c ft_strlcat.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

CC = gcc -c

FLAGS = -Wall -Werror -Wextra

OBJS = ${SRCS:%.c=%.o}

all:
	gcc $(FLAGS) -c $(SOURCE)
	ar -c -r -s $(NAME) $(SOURCE)

clean: rm -f $(OBJS)

ftclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -c $(SRCS)
	ar crs $(NAME)

bonus: $(OBJBON) $(OBJ)
	$(NAME) $(OBJBON) $(OBJ)

.PHONY: all clean ftclean re bonus
