NAME_B	= checker
N_GNL	= get_next_line
GNL_SRC	= get_next_line/get_next_line.c get_next_line/get_next_line_utils.c

NAME	= push_swap
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
SRC_B	= algo/cheapest.c algo/init_stack.c algo/position_in_stack.c algo/sort_big.c algo/sort_three.c \
		  error/free_ptr.c error/check_duplicate.c error/joind_argument.c error/check_input.c error/error_syntax.c error/free_error.c \
		  libft/ft_strlen.c libft/ft_strdup.c libft/ft_strjoin.c libft/ft_lstadd_back.c libft/ft_lstlast.c libft/ft_lstnew.c libft/ft_lstsize.c libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strlcpy.c libft/ft_super_atoi_man.c \
		  operation/pa_pb.c operation/ra_rb_rr.c operation/rra_rrb_rrr.c operation/sa_sb_ss.c \
		  checker.c
SRC		= algo/cheapest.c algo/init_stack.c algo/position_in_stack.c algo/sort_big.c algo/sort_three.c \
		  error/free_ptr.c error/check_duplicate.c error/joind_argument.c error/check_input.c error/error_syntax.c error/free_error.c \
		  libft/ft_strlen.c libft/ft_strdup.c libft/ft_strjoin.c libft/ft_lstadd_back.c libft/ft_lstlast.c libft/ft_lstnew.c libft/ft_lstsize.c libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strlcpy.c libft/ft_super_atoi_man.c \
		  operation/pa_pb.c operation/ra_rb_rr.c operation/rra_rrb_rrr.c operation/sa_sb_ss.c \
		  push_swap.c

OBJ_SRC = $(SRC:.c=.o)
OBJ_B 	= $(SRC_B:.c=.o)
OBJ_GNL = $(GNL_SRC:.c=.o)

all: $(NAME)

bonus: $(NAME_B)

$(NAME): $(OBJ_SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ_SRC)

$(NAME_B): $(OBJ_B) $(OBJ_GNL)
	$(CC) $(CFLAGS) $(OBJ_B) $(GNL_SRC:.c=.o) -o $(NAME_B)

%.o: %.c push_swap.h get_next_line/get_next_line.h
	$(CC) $(CFLAGS) -I$(N_GNL) -c $< -o $@

clean:
	rm -f $(OBJ_SRC) $(OBJ_B) $(OBJ_GNL)

fclean: clean
	rm -f $(NAME) $(NAME_B)

re: fclean all

.PHONY: all clean fclean re
