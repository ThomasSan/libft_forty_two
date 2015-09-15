# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/26 22:22:02 by tsanzey           #+#    #+#              #
#    Updated: 2015/07/27 14:29:33 by tsanzey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CC= gcc
CFLAGS= -Wall -Werror -Wextra -I$(SRCS)
SRCS= ./src/*.c
OBJS= $(SRCS%.o: %.c)

all: $(NAME)

$(NAME): $(OBJS) 
	ar -rc $(NAME) $(OBJS) 

$(OBJS): $(CC) -c $(CFLAGS) $(SRC)

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)
re : $(fclean) all
