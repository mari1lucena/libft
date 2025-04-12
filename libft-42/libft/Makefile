# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 18:32:22 by mlucena-          #+#    #+#              #
#    Updated: 2025/04/12 18:43:31 by mlucena-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memcpy.c ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
	ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c\
	ft_tolower.c ft_toupper.c ft_isalnum.c 
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