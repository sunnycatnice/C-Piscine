# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asinamet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/12 11:22:33 by asinamet          #+#    #+#              #
#    Updated: 2020/11/12 11:22:45 by asinamet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc
CC_FLAGS = -c -Werror -Wall -Wextra
SOURCES = src/main.c src/file.c src/tools/ft_strcat.c src/tools/ft_putchar.c \
		  src/tools/ft_putstr.c src/tools/ft_atoi.c src/tools/ft_strlen.c \
		  src/tools/ft_strncat.c src/tools/ft_putnbr.c src/converter.c \
		  src/square_finder.c src/tools/ft_map_error.c
OBJ = main.o file.o ft_strcat.o ft_putchar.o ft_putstr.o ft_atoi.o ft_strlen.o \
	  ft_strncat.o ft_putnbr.o converter.o square_finder.o ft_map_error.o

all: $(NAME)

$(NAME):
	$(CC) $(CC_FLAGS) -I includes $(SOURCES)
	$(CC) -o $(NAME) $(OBJ)
	find . -name "*.o" -delete


