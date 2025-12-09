NAME	= phonebook
CC	= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM	= rm -f
SRCS	= main.cpp PhoneBook.cpp Contact.cpp
OBJS	= main.o PhoneBook.o Contact.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp PhoneBook.hpp Contact.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: flcean clean 

