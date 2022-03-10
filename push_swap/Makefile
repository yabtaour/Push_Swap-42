NAME = push_swap

CC = CC

FLAGS = -Wall -Werror -Wextra

SRC = main.c ft_calloc.c ft_split.c ft_strjoin.c\
		ft_strlen.c ft_substr.c ft_new_node.c\
		ft_add_to_stack.c ft_create_stack.c\
		ft_check_imposter.c ft_check_sort.c\

OBJ = ${SRC:.c=.o}

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -o $@ -c $<

all: ${NAME}

${NAME}: ${OBJ}
	$(CC) $(OBJ) -o ${NAME}

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
