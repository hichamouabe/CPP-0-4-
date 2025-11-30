#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:

		void	setContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
		void	displaySummary(int index) const;
		void	displayDetails() const;

	private:
		std::string	_truncate(std::string str) const;
};

#endif
