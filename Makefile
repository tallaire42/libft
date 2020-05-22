NAME		=	libft.a

CC		=	clang-9

CFLAGS		=	-Wall -Wextra -Werror -c

RM		=	rm -rf

SRC		=	ft_bzero.c\
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
			ft_toupper.c\
			print_binary.c

SRC_DIR		=	./srcs/

SRC_PATH	=	$(SRC:%.c=$(SRC_DIR)%.c)

OBJ		=	$(SRC:.c=.o)

OBJ_DIR		=	./obj/

OBJ_PATH	=	$(addprefix $(OBJ_DIR), $(OBJ))

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@echo Creation object directory..
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ_PATH)
	@ar rc $(NAME) $(OBJ_PATH)
	@echo Creating $(NAME)..
	@ranlib $(NAME)

$(OBJ_PATH): $(SRC_PATH)
	@$(CC) -o $@ $(CFLAGS) $<
	@echo Compiling $< --> $@ ..

clean:
	@$(RM) $(OBJ_PATH) $(OBJ_DIR)
	@echo Delete $(OBJ) ..

fclean: clean
	@$(RM) $(NAME)
	@echo Delete executable  $(NAME)

re: fclean all

.PHONY: all clean fclean re

# Variables speciales
#
# $@ = nom de la cible.
# $< = nom de la premiere dependance.
# $^ = liste des dependances.
# $? = liste de dependances plus recentes que la cible.
# $* = nom du fichier sans son extension.
