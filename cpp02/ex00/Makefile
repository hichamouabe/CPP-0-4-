NAME        = fixed

CC          = c++
CPPFLAGS    = -Wall -Wextra -Werror -std=c++98
HEADERS     = Fixed.hpp
SRCS        = main.cpp Fixed.cpp
OBJS        = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

