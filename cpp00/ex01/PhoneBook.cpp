#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	this->_count = 0;
}

std::string	PhoneBook::_getInput(std::string prompt)
{
	std::string input = "";
	while (true)
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
			exit(0);
		if (!input.empty())
			break;
		std::cout << "Field cannot be empty. Please try again" << std::endl;
	}
	return (input);
}

void	PhoneBook::addContact()
{
	std::string fn, ln, nn, pn, ds;

	std::cout << "\n--- ADD NEW CONTACT ---" << std::endl;
	fn = _getInput("Enter First Name: ");
	ln = _getInput("Enter last Name: ");
	nn = _getInput("Enter Nickname: ");
	pn = _getInput("Enter Phone Number: ");
	ds = _getInput("Enter Darkest secret: ");

	this->_contacts[this->_index].setContact(fn, ln, nn, pn, ds);
	this->_index = (this->_index + 1) % 8;
	if (this->_count < 8)
		this->_count++;
	std::cout << "Contact saved succefully!" << std::endl;
}

void	PhoneBook::searchContact()
{
	if (this->_count == 0)
	{
		std::cout << "PhoneBook is empty. ADD a contact first." << std::endl;
		return ;
	}

	std::cout << "\n ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0;i < this->_count; i++)
	{
		this->_contacts[i].displaySummary(i);
	}
	
	std::cout << " ------------------------------------------- " << std::endl;
	std::string input;
	int index;

	std::cout << "Enter index to view details: ";
	if (!std::getline(std::cin, input))
		exit(0);
	if (input.length() == 1 && isdigit(input[0]))
	{
		index = input[0] - '0';
		if (index >= 0 && index < this->_count)
		{
			this->_contacts[index].displayDetails();
		}
		else
		{
			std::cout << "Invalid index " << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid input" << std::endl;
	}
}

