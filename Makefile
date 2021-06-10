NAME =	libft.a
CC =	gcc
CFLAGS =	-Wall -Wextra -Werror
INC	= libft.h
SRC	= ft_bzero.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ =	$(SRC:.c=.o)

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)

RM =	rm -f

all: $(NAME)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

$(OBJ): $(SRC) $(INC)
		$(CC) $(CFLAGS) -c $(SRC) $(INC)

bonus: $(NAME) $(OBJ_BONUS)
		@ar rc $(NAME) $(OBJ_BONUS)
		@ranlib $(NAME)

$(OBJ_BONUS): $(SRC_BONUS) $(INC)
		$(CC) $(CFLAGS) -c $(SRC_BONUS) $(INC)

clean:
		@$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
		@$(RM) $(NAME)

re: 	fclean all

rebonus: fclean bonusSS

.PHONY: all clean fclean re bonus rebonus
