NAME = push_swap

CC = CC

FLAGS = -Wall -Werror -Wextra -g

SRC = main.c ft_calloc.c ft_split.c ft_strjoin.c\
		ft_strlen.c ft_substr.c\
		ft_create_stack.c\
		ft_check_sort.c ft_find_max.c\
		ft_sort.c ft_sort_3nums.c\
		ft_sort_2nums.c ft_find_position.c\
		ft_sort_100.c ft_sort_5nums.c\
		parsing.c ft_free_stack.c\
		./instructions/ft_putstr.c\


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
			./instructions/ft_add_to_stack.c\
			./instructions/ft_new_node.c\

SRC_BONUS = get_next_line.c\
			get_next_line_utils.c\
			ft_strlen.c\
			ft_strjoin.c\
			ft_create_stack.c\
			./instructions/ft_add_to_stack.c\
			./instructions/ft_add_stack_front.c\
			./instructions/ft_new_node.c\
			./instructions/ft_create_node.c\
			ft_checker.c\
			parsing.c ft_substr.c\
			ft_split.c ft_calloc.c\
			./instructions/ft_sa.c\
			./instructions/ft_sb.c\
			./instructions/ft_ss.c\
			./instructions/ft_pb.c\
			./instructions/ft_pa.c\
			./instructions/ft_ra.c\
			./instructions/ft_rb.c\
			./instructions/ft_rr.c\
			./instructions/ft_rra.c\
			./instructions/ft_rrb.c\
			./instructions/ft_rrr.c\
			ft_free_stack.c\
			./instructions/ft_putstr.c\
			ft_strcmp.c\


OBJ = ${SRC:.c=.o}

OBJ_IN = ${SRC_IN:.c=.o}

OBJ_BONUS = ${SRC_BONUS:.c=.o}

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -o $@ -c $<

all: ${NAME}

${NAME}: ${OBJ} ${OBJ_IN}
	$(CC) $(OBJ) ${OBJ_IN} -o ${NAME}

bonus: ${OBJ_BONUS}
	$(CC) $(OBJ_BONUS) -o checker

clean:
	rm -rf $(OBJ) $(OBJ_IN) ${OBJ_BONUS}

fclean: clean
	rm -rf $(NAME) checker

re: fclean all
