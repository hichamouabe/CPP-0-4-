#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	book;
	std::string	command;

	while (true)
	{
		std::cout << "\n> Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
			break;
		if (command == "ADD")
		{
			book.addContact();
		}
		else if (command == "SEARCH")
		{
			book.searchContact();
		}
		else if (command == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Unkown command." << std::endl;
		}
	}
	return (0);
}
