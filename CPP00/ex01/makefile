SRC				=	contact.cpp \
					main.cpp \
					phonebook.cpp

SRC_DIR			:=	sources/
OBJ_DIR			:=	objects/
SRC				:=	$(addprefix $(SRC_DIR), $(SRC))
OBJ				:=	$(subst $(SRC_DIR), $(OBJ_DIR), $(SRC:.cpp=.o))

NAME			:=	phonebook
DEBUG			:=	-g
INCLUDE		:=	-I includes
CC				:=	g++ -Wall -Werror -Wextra $(DEBUG) $(INCLUDE)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@$(CC) $(OBJ) -o $@
	@echo "$(CC) -o $(NAME)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@$(CC) -c $< -o $@
	@echo "$(CC)$< $@"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

libft/Makefile:
	git submodule init libft/
	git submodule update --remote libft/

$(LIBFT): libft/Makefile
	@make -C $(LIBFT_DIR)

.PHONY: all clean fclean re