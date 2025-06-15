# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/15 18:43:59 by alaziz            #+#    #+#              #
#    Updated: 2025/06/15 18:44:44 by alaziz           ###   LAUSANNE.ch        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = \
    ft_atoi.c \
    # Add more functions here like ft_strdup.c ft_strchr.c etc.

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rc

all: $(NAME)

$(NAME): $(OBJ)
    $(AR) $(ARFLAGS) $(NAME) $(OBJ)
    ranlib $(NAME)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
