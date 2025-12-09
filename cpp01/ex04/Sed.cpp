#include "Sed.hpp"

Sed::Sed(std::string filename) : _inFile(filename)
{
	this->_outFile = filename + ".replace";
}

Sed::~Sed() {}

void	Sed::replace(std::string s1, std::string s2)
{
	std::ifstream infs(_inFile.c_str());
	if (!infs.is_open())
	{
		std::cerr << "Error:unable to open input file: " << _inFile << std::endl;
		return ;
	}

	std::string content;
	if (std::getline(infs, content, '\0'))
	{
		infs.close();
	} else 
	{
		infs.close();
	}
	if (!s1.empty())
	{
		size_t pos = 0;
		while (true)
		{
			pos = content.find(s1, pos);
			if (pos == std::string::npos)
			{
				break;
			}
			content.erase(pos, s1.length());
			content.insert(pos, s2);
			pos += s2.length();
		}
	}
	std::ofstream oufs(_outFile.c_str());
	if (!oufs.is_open())
	{
		std::cerr << "Error:unable to create output file: " << _outFile << std::endl;
		return ;
	}
	oufs << content;
	oufs.close();
}
