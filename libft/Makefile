# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 12:51:11 by lde-merc          #+#    #+#              #
#    Updated: 2024/11/25 10:21:29 by lde-merc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
AR = ar -rcs

FILES = $(wildcard *.c)
HEADER = libft.h
OBJ = $(FILES:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
    
re: fclean all

.PHONY: all clean fclean re