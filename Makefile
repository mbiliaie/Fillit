#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbiliaie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/18 14:04:52 by mbiliaie          #+#    #+#              #
#    Updated: 2017/11/18 14:04:58 by mbiliaie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	fillit
SRCS	=	main.c ft_fillit.c ft_putstr.c ft_str_vld.c ft_trm_ct.c \
			ft_trm_vld.c ft_check_trm_in_field.c ft_memset.c ft_side.c ft_sqrt.c ft_strlen.c ft_trm_in_field.c ft_trm_mk_mv.c \
			ft_arr_mk.c ft_first_move.c ft_read_trm.c ft_field_mk.c ft_make_add_move.c ft_del_one_trm.c ft_add_move.c \
			ft_del_last_trm.c ft_fucker.c ft_magic.c ft_reader.c
OBJS	=	$(SRCS:.c=.o)
FLAGS	=	-Wall -Wextra -Werror
.PHONY: clean fclean re all

all: $(NAME)
%.o:%.c
	@gcc -c $? $(FILES) $(FLAGS)
$(NAME): $(OBJS)
	@gcc $(FLAGS) $(OBJS) -o $(NAME)
	@echo $(NAME) "ready"

clean:
	@rm -f $(OBJS)
	@echo "Objects deleted"
fclean: clean
	@rm -f $(NAME)
	@echo $(NAME) "deleted"
re: fclean all
