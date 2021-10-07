
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