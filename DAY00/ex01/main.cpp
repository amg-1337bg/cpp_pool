
#include "phonebook.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "Please Enter a Command (\"ADD\", \"SEARCH\", \"EXIT\"): ";
		std::cin >> cmd;
		if (!cmd.compare("ADD"))
			phonebook.add_contact();
		else if (!cmd.compare("SEARCH"))
			phonebook.search();
		else if (!cmd.compare("EXIT"))
			return (0);
		else
			std::cout << "ERROR" << std::endl;
	}
	return(0);
} 