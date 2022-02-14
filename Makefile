# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabuchar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/16 11:09:48 by mabuchar          #+#    #+#              #
#    Updated: 2021/07/16 11:09:50 by mabuchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	cub3d
CC		=	clang
FLAGS	=	-O3 -Wall -Wextra -Werror -fsanitize=address
SRCS	=	srcs/main.c \
			srcs/hook.c \
			srcs/move_pos.c \
			srcs/move_pos_d_a.c \
			srcs/mini_map.c \
			srcs/mlx_utils.c \
			srcs/ray_hor.c \
			srcs/ray_ver.c \
			srcs/del_print_ray.c \
			srcs/libft_utils.c \
			srcs/load_texture.c \
			srcs/draw.c \
			srcs/raycasting.c
OBJS	=	$(SRCS:.c=.o)
# Linux :	-lm -lbsd -lX11 -lXext
# Mac	:	-framework OpenGL -framework AppKit

all: $(NAME)


$(NAME): $(OBJS)
	make -C mlx
	$(CC) $(FLAGS) -I includes -o $(NAME) $(OBJS) -Lmlx -lmlx -lX11 -lbsd -lm -lXext

%.o: %.c
	$(CC) $(FLAGS) -I includes -Imlx -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

# -lft