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
	std::getline(std::cin, first_name);
	std::cout << "Last Name : ";
	std::getline(std::cin, last_name);
	std::cout << "NickName : ";
	std::getline(std::cin, nickname);
	std::cout << "Phone Number : ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin,  darkest_secret);

	if (this->length != 8)
		this->length++;
	Contact contact(this->current, first_name, last_name, nickname, phone_number, darkest_secret);
	this->contact[this->current] = contact;
	this->current++;
	if (this->current == 8)
		this->current = 0;
}

void trancate(std::string str)
{
	int i;

	i = -1;
	if (str.length() >= 10)
	{
		while (++i < 10)
			std::cout << str[i];
		std::cout << ".";
	}
	else
		std::cout << std::setw(10) << str;
}

void	PhoneBook::search()
{
	int i;
	int index;
	std::string text;

	i = -1;
	std::cout << std::setw(10) << "index |";
	std::cout << std::setw(10) << "First Name";
	std::cout << std::setw(10) << "|Last Name";
	std::cout << std::setw(10) << "| nickname";
	std::cout << std::endl;
	while (++i < this->length)
	{
		std::cout << std::setw(10) << contact[i].getindex();
		trancate(contact[i].getfname());
		trancate(contact[i].getlname());
		trancate(contact[i].getnickname());
		// std::cout << std::setw(10) << trancate(contact[i].getfname());
		// std::cout << std::setw(10) << trancate(contact[i].getlname());
		// std::cout << std::setw(10) << trancate(contact[i].getnickname());
		std::cout << std::endl;
	}
	std::cout << "Choose an index: ";
	std::cin >> index;
	if (std::cin.fail() || index < 0 || index > 7 || index >= this->length)
	{
		std::cout << "ERROR" << std::endl;
		std::cin.clear();
		std::cin.ignore(INT_MAX,'\n');
		return ;
	}
	else
	{
		std::cout << "First Name : " << this->contact[index].getfname() << std::endl;
		std::cout << "Last Name : " << this->contact[index].getlname() << std::endl;
		std::cout << "NickName : " << this->contact[index].getnickname() << std::endl;
		std::cout << "Phone Number : " << this->contact[index].getphonenumber() << std::endl;
		std::cout << "Darkest Secret : " << this->contact[index].getfdarkestsecret() << std::endl;
		std::cin.clear();
		std::cin.ignore(INT_MAX,'\n');
	}
}