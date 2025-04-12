NAME = libft.a
SRC = ft_memcpy.c
OBJFILES = $(SRC:%.c=%.o)
CC = cc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)

%.o: %.c
	$(CC) $(FLAGS) -c $< -I . -o $@

clean:
	rm -rf $(OBJFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test:
	sh run_tests.sh

.PHONY: all clean fclean re test