#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->current = 0;
	this->length = 0;
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

	if (this->length != 8)
		this->length++;
	Contact contact(this->current, first_name, last_name, nickname, phone_number, darkest_secret);
	this->contact[this->current] = contact;
	this->current++;
	if (this->current == 8)
		this->current = 0;
}

void	PhoneBook::search()
{
	int i;
	int index;

	i = -1;
	std::cout << std::setw(10) << "index |";
	std::cout << std::setw(10) << "First Name|";
	std::cout << std::setw(10) << "Last Name|";
	std::cout << std::setw(10) << "nickname";
	std::cout << std::endl;
	while (++i < this->length)
	{
		std::cout << std::setw(10) << contact[i].getindex();
		std::cout << std::setw(10) << contact[i].getfname();
		std::cout << std::setw(10) << contact[i].getlname();
		std::cout << std::setw(10) << contact[i].getnickname();
		std::cout << std::endl;
	}
	std::cout << "Choose an index: ";
	index = 0;
	if (index < 0 || index > 7 || index >= this->length)
		std::cout << "ERROR" << std::endl;
	else
	{
		std::cout << "First Name : " << this->contact[index].getfname() << std::endl;
		std::cout << "Last Name : " << this->contact[index].getlname() << std::endl;
		std::cout << "NickName : " << this->contact[index].getnickname() << std::endl;
		std::cout << "Phone Number : " << this->contact[index].getphonenumber() << std::endl;
		std::cout << "Darkest Secret : " << this->contact[index].getfdarkestsecret() << std::endl;
	}
}