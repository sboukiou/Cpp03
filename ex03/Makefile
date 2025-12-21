CXX=c++
CPPFLAGS=-Wall -Werror -Wextra -Wshadow-all -std=c++98
NAME=DiamondTrap
SRC=main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
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
