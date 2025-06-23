# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaziz <alaziz.student.42luxembourg.lu>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/21 16:02:13 by alaziz            #+#    #+#              #
#    Updated: 2025/06/23 12:53:26 by alaziz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ============= CONFIGURATION =============
NAME = libft.a
NAME_SO = libft.so

SRCS = \
    ft_atoi.c ft_strlen.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c \
    ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c \
    ft_isascii.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c \
    ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
    ft_strdup.c ft_calloc.c ft_memcpy.c ft_memmove.c ft_memcmp.c \
    ft_memchr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
    ft_itoa.c ft_strmapi.c ft_strnstr.c ft_striteri.c ft_putendl_fd.c

BONUS = \
    ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
    ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS = ${SRCS:%.c=%.o}
OBJSBONUS = ${BONUS:%.c=%.o}

CC      = gcc
RM      = rm -f
AR      = ar
RANLIB  = ranlib

CFLAGS  = -Wall -Wextra -Werror
LDFLAGS =

RED     = \033[1;31m
GREEN   = \033[1;32m
YELLOW  = \033[1;33m
RESET   = \033[0m

# ============= TARGETS =============
all:	${NAME}
		@echo "${GREEN}------ done ------${RESET}"

bonus:	${NAME}_bonus
		@echo "${GREEN}------ bonus done ------${RESET}"

shared:	${NAME_SO}
		@echo "${GREEN}------ shared lib done ------${RESET}"

${NAME}: ${OBJS}
		@${AR} rcs ${NAME} ${OBJS}
		@${RANLIB} ${NAME}

${NAME}_bonus: ${OBJS} ${OBJSBONUS}
		@${AR} rcs ${NAME} ${OBJS} ${OBJSBONUS}
		@${RANLIB} ${NAME}

${NAME_SO}: ${OBJS}
		@gcc -shared -o ${NAME_SO} ${OBJS}

%.o: %.c libft.h
		@echo "${GREEN}Compiling${RESET} $<"
		@${CC} ${CFLAGS} -c $< -o $@

clean:
		@echo "${YELLOW}Cleaning object files...${RESET}"
		@${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
		@echo "${YELLOW}Removing library...${RESET}"
		@${RM} ${NAME} ${NAME_SO}

re: fclean all

.PHONY: all bonus shared clean fclean re

so:
		$(CC) -fPIC $(CFLAGS) -nostartfiles $(SRCS)
		$(CC) -shared -o libft.so $(OBJS) $(OBJSBONUS)
