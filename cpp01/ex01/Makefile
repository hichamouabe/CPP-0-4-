NAME        = moar_brainz
CC          = c++
CXXFLAGS    = -Wall -Wextra -Werror -g -std=c++98

SRC         = main.cpp Zombie.cpp zombieHorde.cpp
OBJ         = $(SRC:.cpp=.o)
HEADERS     = Zombie.hpp
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
