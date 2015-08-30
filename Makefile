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
CFLAGS= -Wall -Werror -Wextra
SRCS= -I/src
OBJS= $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS) 
	$(CC) -o $(NAME) $(FLAGS) $(OBJS)
	ar -rc $(NAME) $(OBJS) 

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)
re : $(fclean) all
