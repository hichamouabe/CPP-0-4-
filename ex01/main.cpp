#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	book;
	std::string	command;

	while (true)
	{
		std::cout << "\n> Enter command (ADD, SEARCH, EXIT): ";
		
		// Capture input and handle EOF (Ctrl+D)
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
			std::cout << "Unknown command." << std::endl;
		}
	}
	return (0);
}
