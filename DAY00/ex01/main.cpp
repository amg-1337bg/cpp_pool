
#include "phonebook.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook phonebook;
	int	current;
	
	current = 0;
	while (1)
	{
		std::cout << "Please Enter a Command (\"ADD\", \"SEARCH\", \"EXIT\"): ";
		std::cin >> cmd;
		if (!cmd.compare("ADD"))
		{
			phonebook.add_contact(current);
			current++;
		}
		else if (!cmd.compare("SEARCH"))
			std::cout << "SEARCH" << std::endl;
		else if (!cmd.compare("EXIT"))
			return (0);
		else
			std::cout << "ERROR" << std::endl;
	}
	return(0);
}