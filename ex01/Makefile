CXX=c++
CPPFLAGS=-Wall -Werror -Wextra -std=c++98
NAME=ClapTrap
SRC=main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ=$(SRC:%.cpp=%.o)


%.o: %.c
	$(CXX) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re
