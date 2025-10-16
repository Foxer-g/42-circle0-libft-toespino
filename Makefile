CC = cc
CFLAGS = -Wextra -Wall -Werror
NAME = libft.a
OBJ = ft_isalpha.o \
	ft_isdigit.o \
	ft_isalnum.o\
	ft_isascii.o\
	ft_isprint.o\
	ft_strlen.o\
	ft_memset.o\
	ft_bzero.o\
	ft_memcpy.o\
	ft_memmove.o\
	ft_strlcpy.o\
	ft_strlcat.o\
	ft_toupper.o\
	ft_tolower.o\
	ft_strchr.o\
	ft_strrchr.o\
	ft_strncmp.o

all : $(NAME)

$(NAME) : $(OBJ)
	ar rsc $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) $< -c -o $@

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
