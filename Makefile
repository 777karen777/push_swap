# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 17:15:29 by knikogho          #+#    #+#              #
#    Updated: 2022/09/07 20:00:09 by knikogho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

BONUS		= checker

TMP			= tmp

SRCS		= $(shell find . -maxdepth 1 -name '*.c' ! -name '*_bonus.c')
SRCS_BON	= $(shell find . -maxdepth 1 -name '*.c' ! -name 'push_swap.c')

OBJS		= $(patsubst ./%.o, $(TMP)/%.o, $(SRCS:.c=.o))
OBJS_BON	= $(patsubst ./%.o, $(TMP)/%.o, $(SRCS_BON:.c=.o))

CC			= cc

CFLAGS		= -Wall -Wextra -Werror 

COPTIONS	= -I.

RM			= rm -rf

all: 		$(BONUS) $(NAME)

./$(TMP)/%.o: ./%.c
			@$(CC) $(CFLAGS) $(COPTIONS) -o $@ -c $<

$(TMP):
			@mkdir $(TMP)

$(NAME): 	$(TMP) $(OBJS)
			@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(BONUS):	$(TMP) $(OBJS_BON)
			@$(CC) $(CFLAGS) -o $(BONUS) $(OBJS_BON)

bonus:		$(BONUS)

clean:
			@$(RM) $(TMP)

fclean: 	clean
			@$(RM) $(NAME) $(BONUS)

re: 		fclean all

.PHONY: 	all clean fclean re