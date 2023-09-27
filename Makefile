OBJS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

OFILES = ft_*.o
all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(OBJS)

clean:
	rm -f $(NAME) $(OFILES)

fclean: clean
	rm -f $(NAME)