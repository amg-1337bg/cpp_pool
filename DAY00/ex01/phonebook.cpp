#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->current = 0;
}

void	PhoneBook::add_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "First Name : ";
	std::cin >> first_name;
	std::cout << "Last Name : ";
	std::cin >> last_name;
	std::cout << "NickName : ";
	std::cin >> nickname;
	std::cout << "Phone Number : ";
	std::cin >> phone_number;
	std::cout << "Darkest Secret : ";
	std::cin >> darkest_secret;

	Contact contact(this->current, first_name, last_name, nickname, phone_number, darkest_secret);
	this->contact[this->current] = contact;
	this->current++;
}

void	PhoneBook::search()
{
	int i;

	i = -1;
	std::cout << std::setw(10);
	std::cout << "index | ";
	std::cout << "First Name | ";
	std::cout << "Last Name | ";
	std::cout << "nickname";
	std::cout << std::endl;
	while (++i < this->current)
	{
		// std::cout << std::setw(10);
		std::cout << contact[i].getindex();
		// std::cout << contact[i].getfname();
		// std::cout << contact[i].getlname();
		// std::cout << contact[i].getnickname();
		std::cout << std::endl;
	}
}