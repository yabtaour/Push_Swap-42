NAME = push_swap

CC = CC

FLAGS = -Wall -Werror -Wextra -g

SRC = main.c ft_calloc.c ft_split.c ft_strjoin.c\
		ft_strlen.c ft_substr.c ft_new_node.c\
		ft_add_to_stack.c ft_create_stack.c\
		ft_check_imposter.c ft_check_sort.c\
		ft_sort.c ft_sort_3nums.c\

SRC_IN = ./instructions/ft_sa.c\
			./instructions/ft_sb.c\
			./instructions/ft_ss.c\
			./instructions/ft_add_stack_front.c\
			./instructions/ft_pb.c\
			./instructions/ft_pa.c\
			./instructions/ft_create_node.c\
			./instructions/ft_ra.c\
			./instructions/ft_rb.c\
			./instructions/ft_rr.c\
			./instructions/ft_rra.c\
			./instructions/ft_rrb.c\
			./instructions/ft_rrr.c\

OBJ = ${SRC:.c=.o}

OBJ_IN = ${SRC_IN:.c=.o}

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -o $@ -c $<

all: ${NAME}

${NAME}: ${OBJ} ${OBJ_IN}
	$(CC) $(OBJ) ${OBJ_IN} -o ${NAME}

clean:
	rm -rf $(OBJ) $(OBJ_IN)

fclean: clean
	rm -rf $(NAME)

re: fclean all
