
NAME				=	interns

CC					=	c++
FLAGS				=	-Wall -Wextra -Werror -std=c++98

SRC					=	./AForm.cpp \
						./Bureaucrat.cpp \
						./Intern.cpp \
						./main.cpp \
						./PresidentialPardonForm.cpp \
						./RobotomyRequestForm.cpp \
						./ShrubberyCreationForm.cpp \

OBJ_DIR				=	.objects/
OBJ					=	$(SRC:./%.cpp=$(OBJ_DIR)%.o)

#COLORS
BLUE				=	\033[1;34m
BOLD_BLUE			=	\033[0;34m
WHITE				=	\033[0m

define BANNER
$(BOLD_BLUE)

   ▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓▓        ▓▓▓▓▓    ▓▓▓▓▓▓▓▓▓▓               ▓▓▓▓▓     ▓▓▓▓▓▓▓▓ 
  ▓▓▓░░░░░▓▓▓░░▓▓▓░░░░░▓▓▓░░▓▓▓░░░░░▓▓▓     ▓▓▓░░░▓▓▓ ░▓▓▓░░░░░░▓             ▓▓▓░░░▓▓▓  ▓▓▓░░░░▓▓▓
 ▓▓▓     ░░░  ░▓▓▓    ░▓▓▓ ░▓▓▓    ░▓▓▓    ▓▓▓   ░░▓▓▓░▓▓▓     ░             ▓▓▓   ░░▓▓▓░░░    ░▓▓▓
░▓▓▓          ░▓▓▓▓▓▓▓▓▓▓  ░▓▓▓▓▓▓▓▓▓▓    ░▓▓▓    ░▓▓▓░▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓▓▓▓░▓▓▓    ░▓▓▓   ▓▓▓▓▓▓░ 
░▓▓▓          ░▓▓▓░░░░░░   ░▓▓▓░░░░░░     ░▓▓▓    ░▓▓▓░░░░░░░░▓▓▓░░░░░░░░░░ ░▓▓▓    ░▓▓▓  ░░░░░░▓▓▓
░░▓▓▓     ▓▓▓ ░▓▓▓         ░▓▓▓           ░░▓▓▓   ▓▓▓  ▓▓▓   ░▓▓▓           ░░▓▓▓   ▓▓▓  ▓▓▓   ░▓▓▓
 ░░▓▓▓▓▓▓▓▓▓  ▓▓▓▓▓        ▓▓▓▓▓           ░░░▓▓▓▓▓░  ░░▓▓▓▓▓▓▓▓             ░░░▓▓▓▓▓░  ░░▓▓▓▓▓▓▓▓ 
  ░░░░░░░░░  ░░░░░        ░░░░░              ░░░░░░    ░░░░░░░░                ░░░░░░    ░░░░░░░░  
$(WHITE)
$(END)
endef
export BANNER

all:				$(NAME)

$(NAME):			$(OBJ)
					@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
					@echo "\n······································ Compilation complete ·······································"
					@echo "$$BANNER"

$(OBJ_DIR)%.o:		./%.cpp | $(OBJ_DIR)
					@$(CC) $(FLAGS) -c -o $@ $<

$(OBJ_DIR):
					@mkdir -p $(OBJ_DIR)

clean:
					@rm -f $(OBJ)
					@rm -rf $(OBJ_DIR)
					@echo "\n$(WHITE) · $(BLUE)Objects removed.$(WHITE)\n"

fclean:				clean
					@rm -f $(NAME)
					@echo "$(WHITE) · $(BLUE)Executable removed.$(WHITE)\n"

re:					fclean $(NAME)

.PHONY:				all clean fclean re
