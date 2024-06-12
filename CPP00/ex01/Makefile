SRC				=	megaphone.cpp

NAME			:=	megaphone

# DEBUG			:=	-g
CC				:=	g++ -Wall -Werror -Wextra $(DEBUG) $(INCLUDE)
INCLUDE			:=	-I phonebook.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $@
	@echo "$(CC) -o $(NAME)"

$(OBJ)%.o: $(SRC)%.c
	@$(CC) -c $< -o $@
	@echo "$(CC)$< $@"

clean:
	@rm -f $(OBJ)

re: fclean all

fclean: clean
	@rm -rf $(OBJ)

.PHONY: all clean re fclean