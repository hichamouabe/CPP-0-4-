NAME	= megaphone
CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM	= rm -f
SRCS	= magaphone.cpp
OBJS	= megaphone.o
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
