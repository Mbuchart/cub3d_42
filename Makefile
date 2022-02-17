# NAME		=	cub3d

# LIBFT		=	libft/libft.a

# CC			=	clang #ou clang ? mettre -03 dans les flags dans ce cas ?

# CFLAGS		=	-O3 -Werror -Wall -Wextra -fsanitize=address

# SRCS 		=	srcs/check_map.c \
# 				srcs/cub3d_utils.c \
# 				srcs/cub3d.c \
# 				srcs/parse_dot_cub.c \
# 				srcs/del_print_ray.c \
# 				srcs/draw.c \
# 				srcs/hook.c \
# 				srcs/load_texture.c \
# 				srcs/start_game.c \
# 				srcs/mini_map.c \
# 				srcs/mlx_utils.c \
# 				srcs/move_pos_d_a.c \
# 				srcs/move_pos.c \
# 				srcs/ray_hor.c \
# 				srcs/ray_ver.c \
# 				srcs/raycasting.c

# OBJS		=	$(SRCS:.c=.o)

# all			:	$(NAME)

# $(NAME)		:	$(OBJS) $(LIBFT)
# 				make -C mlx
# 				$(CC) $(CFLAGS) -I includes -o $(NAME) $(OBJS) -Lmlx -lmlx -lx11 -lbsd -lm -lXext $(LIBFT)

# %.o: %.c
# 	$(CC) $(FLAGS) -I includes -Imlx -c $< -o $@

# $(LIBFT)	:
# 				make -C ./libft

# clean		:
# 				rm -rf $(OBJS)
# 				make clean -C ./libft

# fclean		:	clean
# 				rm $(NAME)
# 				make fclean -C ./libft

# re			:	fclean all

# .PHONY:		all clean fclean re



NAME	=	cub3d
LIBFT	=	libft/libft.a
CC		=	clang
FLAGS	=	-O3 -Wall -Wextra -Werror -fsanitize=address
SRCS	=	srcs/check_map.c \
				srcs/cub3d_utils.c \
				srcs/cub3d.c \
				srcs/parse_dot_cub.c \
				srcs/parse_dot_cub_2.c \
				srcs/del_print_ray.c \
				srcs/draw.c \
				srcs/hook.c \
				srcs/load_texture.c \
				srcs/start_game.c \
				srcs/mini_map.c \
				srcs/mlx_utils.c \
				srcs/move_pos_d_a.c \
				srcs/move_pos.c \
				srcs/ray_hor.c \
				srcs/ray_ver.c \
				srcs/raycasting.c
INCS	=	$(addprefix includes/, cub3d.h)
OBJS	=	$(SRCS:.c=.o)
# Linux :	-lm -lbsd -lX11 -lXext
# Mac	:	-framework OpenGL -framework AppKit

all: $(NAME)


$(NAME): $(OBJS) $(INCS)
	make -C libft
	make -C mlx
	$(CC) $(FLAGS) -I includes -o $(NAME) $(OBJS) libft/libft.a -Lmlx -lmlx -lX11 -lbsd -lm -lXext

%.o: %.c $(INCS)
	$(CC) $(FLAGS) -I includes -Imlx -c $< -o $@

clean:
	make fclean -C libft
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

# -lft%  