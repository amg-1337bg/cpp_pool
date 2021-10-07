#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{

}

void	PhoneBook::add_contact(int i)
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

	Contact contact(i, first_name, last_name, nickname, phone_number, darkest_secret);
	this->contact[i] = contact;
}

void	PhoneBook::search()
{

}