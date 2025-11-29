NAME	= account
CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM	= rm -f
SRCS	= Account.cpp tests.cpp 
OBJS	= Account.o tests.o

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean clean 


