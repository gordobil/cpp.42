# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngordobi <ngordobi@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 11:39:41 by ngordobi          #+#    #+#              #
#    Updated: 2025/02/17 11:39:41 by ngordobi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	fight

CC					=	c++
FLAGS				=	-Wall -Wextra -Werror -std=c++98

SRC					=	$(shell find ./ -name "*.cpp")

OBJ_DIR				=	.objects
OBJ					=	$(SRC:./%.cpp=$(OBJ_DIR)/%.o)

#COLORS
BLUE				=	\033[1;34m
BOLD_BLUE			=	\033[0;34m
WHITE				=	\033[0m

define BANNER
$(BOLD_BLUE)

   ▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓▓        ▓▓▓▓▓    ▓▓▓▓             ▓▓▓▓▓     ▓▓▓▓▓▓▓▓ 
  ▓▓▓░░░░░▓▓▓░░▓▓▓░░░░░▓▓▓░░▓▓▓░░░░░▓▓▓     ▓▓▓░░░▓▓▓ ░░▓▓▓           ▓▓▓░░░▓▓▓  ▓▓▓░░░░▓▓▓
 ▓▓▓     ░░░  ░▓▓▓    ░▓▓▓ ░▓▓▓    ░▓▓▓    ▓▓▓   ░░▓▓▓ ░▓▓▓          ▓▓▓   ░░▓▓▓░░░    ░▓▓▓
░▓▓▓          ░▓▓▓▓▓▓▓▓▓▓  ░▓▓▓▓▓▓▓▓▓▓    ░▓▓▓    ░▓▓▓ ░▓▓▓   ▓▓▓▓▓ ░▓▓▓    ░▓▓▓   ▓▓▓▓▓▓░ 
░▓▓▓          ░▓▓▓░░░░░░   ░▓▓▓░░░░░░     ░▓▓▓    ░▓▓▓ ░▓▓▓  ░░░░░  ░▓▓▓    ░▓▓▓  ░░░░░░▓▓▓
░░▓▓▓     ▓▓▓ ░▓▓▓         ░▓▓▓           ░░▓▓▓   ▓▓▓  ░▓▓▓         ░░▓▓▓   ▓▓▓  ▓▓▓   ░▓▓▓
 ░░▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓        ▓▓▓▓▓           ░░░▓▓▓▓▓░   ▓▓▓▓▓         ░░░▓▓▓▓▓░  ░░▓▓▓▓▓▓▓▓ 
  ░░░░░░░░░  ░░░░░        ░░░░░              ░░░░░░   ░░░░░            ░░░░░░    ░░░░░░░░  
$(WHITE)
$(END)
endef
export BANNER

all:				$(NAME)

$(NAME):			$(OBJ)
					@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
					@echo "\n·································· Compilation complete ···································"
					@echo "$$BANNER"

$(OBJ_DIR)/%.o:		%.cpp | $(OBJ_DIR)
					@$(CC) $(FLAGS) -c -o $@ $<

$(OBJ_DIR):
					@mkdir -p $(OBJ_DIR)

clean:
					@rm -f $(OBJ)
					@rm -rf .objects/
					@echo "\n$(WHITE) · $(BLUE)Objects removed.$(WHITE)\n"

fclean:				clean
					@rm -f $(NAME)
					@echo "$(WHITE) · $(BLUE)Executable removed.$(WHITE)\n"

re:					fclean $(NAME)

.PHONY:				all clean fclean re
