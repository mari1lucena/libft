# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 18:32:22 by mlucena-          #+#    #+#              #
#    Updated: 2025/04/21 17:53:37 by mlucena-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memcpy.c ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
	ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c\
	ft_tolower.c ft_toupper.c ft_isalnum.c ft_strlcat.c ft_strnstr.c\
	ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	ft_strtrim.c ft_split.c ft_substr.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_memcmp.c\

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c \

INCLUDE = libft.h
OBJFILES = $(SRC:%.c=%.o)
BONUS_0 = $(BONUS:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJFILES) $(INCLUDE)
	ar -rcs $(NAME) $(OBJFILES)

%.o: %.c $(INCLUDE)
	$(CC) $(FLAGS) -c $< -I . -o $@
	
bonus: $(BONUS_0) $(OBJFILES)
	ar -rcs $(NAME) $(BONUS_0) $(OBJFILES)
	touch bonus

clean:
	rm -rf $(OBJFILES) $(BONUS_0)

fclean: clean
	rm -rf $(NAME)
	rm -f bonus

re: fclean all

.PHONY: all clean fclean re test