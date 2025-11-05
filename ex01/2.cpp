#include <iostream>
#include <string>

class	Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		void	Set_Contact(std::string first ,  std::string last ,\
			       	std::string aka , std::string phone, std::string secret)
		{
			_first_name = first;
			_last_name = last;
			_nickname = aka;
			_phone_number = phone;
			_darkest_secret = secret;
		}
};

class	PhoneBook
{
	private:
		Contact _contacts[8];
		int	_count;
	public:
		PhoneBook() : _count(0) {}

		void	AddContact(std::string first, std::string last , std::string aka, \
				std::string phone, std::string secret)
		{
			int index = _count % 8;
			_contacts[index].Set_Contact(first, last, aka, phone, secret);
			_count++;
		}
};

int	is_empty(std::string info)
{
	return info.empty() || info.find_first_not_of(" \t\n\v\f\r") == std::string::npos;
}


int main()
{
	PhoneBook pd;
	while (1)
	{
		std::cout << "$> ";
		std::string cmd;
		std::getline(std::cin , cmd);
		if (std::cin.fail())
			exit(42);
		if (cmd == "ADD")
		{
			std::string first, last, aka, phone, secret;
			std::cout << "First name: ";
			std::getline(std::cin, first);
			while (is_empty(first))
			{
				std::cout << "First name cannot be empty!\n";
				std::cout << "First name PLEASE!!: ";
				std::getline(std::cin, first);
			}
			std::cout << "Last  name: ";
			std::getline(std::cin, first);
			while (is_empty(first))
			{
				std::cout << "Last name cannot be empty!\n";
				std::cout << "Last name PLEASE||: ";
				std::getline(std::cin, last);
			}
			std::cout << "The nickname: ";
			std::getline(std::cin, aka);
			while (is_empty(aka))
			{
				std::cout << "Every one have a nickname just do your OSINT :)\n";
				std::cout << "AM WAITING!! : ";
				std::getline(std::cin, aka);
			}
			std::cout << "Phone number: ";
			std::getline(std::cin, phone);
			while (is_empty(phone))
			{
				std::cout << "It's a PHONEbook we need the phone number!!\n";
				std::cout << "Phone number PLEASE!!: ";
				std::getline(std::cin, phone);
			}
			std::cout << "The Darkest secret: ";
			std::getline(std::cin, secret);
			while (is_empty(secret))
			{
				std::cout << "ehm ehm ehm ! you can't skip that \n";
				std::cout << "small secret then: ";
				std::getline(std::cin, secret);
			}
			pd.AddContact(first, last, aka, phone, secret);
		}
	}
}
