# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/01 16:27:03 by mbriffau          #+#    #+#              #
#    Updated: 2017/09/22 00:41:18 by mbriffau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilation #
CC = gcc
CFLAGS = -Wall -Wextra -Werror
ADDFLAGS = -framework OpenGL -framework Appkit

# Default rule #
DEFRULE = all

# Executable
NAME = fdf

# Directories
SRCDIR = srcs
OBJDIR = objs
INCDIR = includes \
			libft/includes \

# Libs
LIB_MLX = minilibx_macos/libmlx.a
MLX = -lmlx
LIB_FT = libft/libft.a

#####################
# includes
INC = libft
OBJ_PATH = objs
HEADER = incl
SRC_PATH = srcs


# Sources
SRC = srcs/main.c \
		srcs/display.c \
		srcs/draw_map.c \
		srcs/line.c \
		srcs/fdf_malloc.c \
		srcs/key_function.c \
		srcs/parsing.c \
		srcs/ft_error.c \
		srcs/color.c

OBJ = $(SRC:.c=.o)
# **************************************************************************** #
# SPECIAL CHARS

LOG_CLEAR		= \033[2K
LOG_UP			= \033[A
LOG_NOCOLOR		= \033[0m
LOG_BOLD		= \033[1m
LOG_UNDERLINE	= \033[4m
LOG_BLINKING	= \033[5m
LOG_BLACK		= \033[1;30m
LOG_RED			= \033[1;31m
LOG_GREEN		= \033[1;32m
LOG_YELLOW		= \033[1;33m
LOG_BLUE		= \033[1;34m
LOG_VIOLET		= \033[1;35m
LOG_CYAN		= \033[1;36m
LOG_WHITE		= \033[1;37m

# **************************************************************************** #

# RULES

all: tmp $(NAME)

$(NAME) :
	@make -C libft
	@$(CC) -o $(NAME) $(CFLAGS) $(MLX) $(LIB_FT) $(SRC) $(ADDFLAGS)
	@echo "\033[1;37mFDF's program \033[0;32mCreated.\033[0m"


tmp : 
	@mkdir -p objs

clean :
	@make -C libft clean
	@-/bin/rm -rf objs
	@echo "\033[1;37mFDF's .o files \033[1;31mdeleted.\033[0m"

fclean : clean
	@make -C libft fclean
	@-/bin/rm -f $(NAME)
	@echo "\033[1;37mFDF's Project fully \033[1;31mcleaned.\033[0m"

re : fclean all

.PHONY: all clean fclean re