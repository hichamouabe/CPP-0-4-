#include <iostream>
#include <string>


int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "address of the string variable is : " << &str << std::endl;
	std::cout << "address held to by stringPTR is : " << stringPTR << std::endl;
	std::cout << "address held by stringREF is : " << &stringREF << std::endl;

	std::cout << "--------------------------------------" << std::endl;

	std::cout << "value of string variable : " << str << std::endl;
	std::cout << "the value pointed by PTR : " << *stringPTR << std::endl;
	std::cout << "the value referenced by REF: " << stringREF << std::endl;
}
