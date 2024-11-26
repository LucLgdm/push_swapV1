# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 12:24:12 by lde-merc          #+#    #+#              #
#    Updated: 2024/11/26 15:54:30 by lde-merc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -g
LIBFT = libft/libft.a
HEADER = push_swap.h
FILES = main.c initialisation.c
SRC = $(FILES)
OBJ = $(FILES:.c=.o)

all: makelibft $(NAME)

$(NAME): $(OBJ) $(LIBFT)
		$(CC) $(CCFLAGS) $(OBJ) -Llibft -lft -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C libft fclean
	
fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)
	
re: fclean all
	
makelibft:
	make -C libft all

.PHONY: all clean fclean re bonus