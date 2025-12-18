NAME        = violence
CC          = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRC         = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ         = $(SRC:.cpp=.o)
HEADERS     = HumanA.hpp HumanB.hpp Weapon.hpp
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

re: fclean all
