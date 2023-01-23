NAME = libft.a
SRC = ./ft_itoa.c ./ft_memmove.c ./ft_memchr.c ./ft_strlen.c ./ft_isdigit.c ./ft_isalpha.c ./ft_calloc.c ./ft_memcpy.c ./ft_strchr.c ./ft_substr.c ./ft_isalnum.c ./ft_isprint.c ./ft_strdup.c ./ft_strncmp.c ./ft_tolower.c ./ft_toupper.c ./ft_strnstr.c ./ft_strlcat.c ./ft_memset.c ./ft_atoi.c ./ft_bzero.c ./ft_isascii.c ./ft_memcmp.c ./ft_split.c ./ft_strlcpy.c ./ft_strrchr.c
OBJ = $(SRC:%.c=%.o)
FLAGS = -Werror -Wextra -Wall

all : $(NAME)
$(NAME) :
	gcc -c $(FLAGS) -I ./ $(SRC)
	ar rcs $(NAME) $(OBJ)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all