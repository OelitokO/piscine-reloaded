CC = gcc
CFLAGS = -Wall -Wextra -Werror


NAME = libft.a

SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = obj


SRCS = ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c
SRC = $(addprefix $(SRC_DIR)/, $(SRCS))
OBJ = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

RM = rm -f
LIBC = ar rc
LIBR = ranlib


$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@


$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ)
	$(LIBR) $(NAME)


all: $(NAME)


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all


norm:
	norminette -R CheckForbiddenSourceHeader $(SRC_DIR)/*.c $(INC_DIR)/*.h


.PHONY: all clean fclean re norm
