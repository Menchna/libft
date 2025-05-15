# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: armkhach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 19:21:20 by armkhach          #+#    #+#              #
#    Updated: 2025/03/01 20:44:09 by armkhach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./ft_isalpha.c \
	./ft_isdigit.c \
	./ft_isalnum.c \
	./ft_isascii.c \
	./ft_isprint.c \
	./ft_strlen.c \
	./ft_memset.c \
	./ft_bzero.c \
	./ft_memcpy.c \
	./ft_memmove.c \
	./ft_strlcpy.c \
	./ft_strlcat.c \
	./ft_toupper.c \
	./ft_tolower.c \
	./ft_strchr.c \
	./ft_strrchr.c \
	./ft_strncmp.c \
	./ft_memchr.c \
	./ft_memcmp.c \
	./ft_strnstr.c \
	./ft_atoi.c \
	./ft_calloc.c \
	./ft_strdup.c \
	./ft_substr.c \
	./ft_strjoin.c \
	./ft_strtrim.c \
	./ft_split.c \
	./ft_itoa.c \
	./ft_strmapi.c \
	./ft_striteri.c \
	./ft_putchar_fd.c \
	./ft_putstr_fd.c \
	./ft_putendl_fd.c \
	./ft_putnbr_fd.c

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)


.PHONY : all clean fclean re 
