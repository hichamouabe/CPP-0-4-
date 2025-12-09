NAME        = harl
CC          = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRC         = main.cpp Harl.cpp
OBJ         = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

re: fclean all
