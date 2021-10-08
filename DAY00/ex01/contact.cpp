
#include "phonebook.hpp"

Contact::Contact()
{

}

Contact::Contact(int index, std::string f_name, std::string l_name, std::string nickname, std::string num, std::string darkest)
{
	this->index = index;
	this->first_name = f_name;
	this->last_name = l_name;
	this->nickname = nickname;
	this->phone_number = num;
	this->darkest_secret = darkest;
}

int	Contact::getindex()
{
	return (this->index);
}

std::string Contact::getfname()
{
	return (this->first_name);
}

std::string Contact::getlname()
{
	return (this->last_name);
}

std::string Contact::getnickname()
{
	return (this->nickname);
}

std::string Contact::getphonenumber()
{
	return (this->phone_number);
}

std::string Contact::getfdarkestsecret()
{
	return (this->darkest_secret);
}