# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsalle <nsalle@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/14 13:37:38 by nsalle            #+#    #+#              #
#    Updated: 2021/01/15 12:19:19 by nsalle           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= 	computor

CC 		= 	gcc
CFLAGS 	+= 	-Wextra -Werror -Wall

SRC 	= 	srcs/main.c						\
			srcs/parsing.c					\
			srcs/utils.c					\

OBJ		=	$(SRC:.c=.o)

INC		=	-I./$(LFTDIR) -I.

LFTDIR	=	libft
LFT		=	-L $(LFTDIR) -lft

RM		=	/bin/rm

all: LFTC $(NAME)

LFTC:
	@$(MAKE) -C $(LFTDIR)

$(NAME): $(OBJ) includes/$(NAME).h $(LFTDIR)/libft.a
	@$(CC) $(CFLAGS) $(INC) $(LFT) -L ~/.brew/lib -lSDL2 -lSDL2_ttf -lSDL2_image $(OBJ) -o $(NAME)
	@printf "\n|-> \033[32m$(NAME) compiled\033[0m\n\n"

clean:
	@$(MAKE) -C $(LFTDIR) $@
	@$(RM) -rf $(OBJ)
	@printf "|-> \033[31mobjects removed\033[0m\n"

fclean: clean
	@$(MAKE) -C $(LFTDIR) $@
	@$(RM) -f $(NAME)
	@printf "|-> \033[31m$(NAME) deleted\033[0m\n"

re: fclean all

.SILENT: $(OBJ)
.PHONY: all clean fclean re