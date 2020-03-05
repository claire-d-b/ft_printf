# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clde-ber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/12 11:15:50 by clde-ber          #+#    #+#              #
#    Updated: 2020/03/05 17:43:56 by clde-ber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_printf.c\
		ft_printf_basics.c\
		ft_printf_char.c\
		ft_printf_conv.c\
		ft_printf_flags.c\
		ft_printf_hex.c\
		ft_printf_numbers.c\
		ft_printf_string.c\
		ft_printf_write_str.c\
		ft_printf_unsigned_numbers.c

OBJ		= $(SRCS:.c=.o)
NAME		= libftprintf.a
CC		= gcc
RUN_SRC		= -c
INCL		= -include
HEADER		= ft_printf.h
LIB		= ar -rcs
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror
.c.o:
		@$(CC) $(RUN_SRC) $(CFLAGS) $(SRCS) $(INCL) $(HEADER)
$(NAME):	$(OBJ)
		@$(LIB) $(NAME) $(OBJ)
all:		$(NAME)
clean:
		@$(RM) $(OBJ)
fclean:		clean
		@$(RM) $(NAME)
re: fclean all
.PHONY:		all clean fclean re
