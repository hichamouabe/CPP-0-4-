#include "Contact.hpp"


void	Contact::setContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	this->_firstName = fn;
	this->_lastName = ln;
	this->_nickName = nn;
	this->_phoneNumber = pn;
	this->_darkestSecret = ds;
}

std::string	Contact::_truncate(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::displaySummary(int index) const
{
	std::cout << "|" << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << _truncate(this->_firstName);
	std::cout << "|" << std::setw(10) << _truncate(this->_lastName);
	std::cout << "|" << std::setw(10) << _truncate(this->_nickName);
	std::cout << "|" << std::endl;
}

void	Contact::displayDetails() const
{
	std::cout << "First Name:	" << this->_firstName << std::endl;
	std::cout << "Last Name:	" << this->_lastName << std::endl;
	std::cout << "NickName:		" << this->_nickName << std::endl;
	std::cout << "Phone number:	" << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret:	" << this->_darkestSecret << std::endl;
}

