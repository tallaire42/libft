NAME	=	libft.a

CC	=	clang-9

CFLAGS	=	-Wall -Wextra -Werror

RM	=	rm -rf

SRC	=	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_itoa.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strcpy.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c

OBJ	=	$(SRC:.c=.o)


all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ) : $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

#$(CC) -fPIC $(CFLAGS) $(SRC)
#	gcc -shared -o libft.so $(BIN)
so :
	$(CC) $(CFLAGS) -c $(SRC)
	gcc -o libft.so -c $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

# Variables speciales
#
# $@ = nom de la cible.
# $< = nom de la premiere dependance.
# $^ = liste des dependances.
# $? = liste de dependances plus recentes que la cible.
# $* = nom du fichier sans son extension.
