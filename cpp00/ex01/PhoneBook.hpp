#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include<string>
#include<ios>
#include<limits>
#include"Contact.hpp"

using std::cout;
using std::endl;
using std::cin;
using std::string;

class Phonebook : public Contact
{
	private:
		int	len;
		Contact contact[8];
	public:
		Phonebook(){}
		Phonebook(const char *f, const char *l, const char *n, const char *num, const char *ds);
		void get_infos(int len);
		void listcontact(int len);
};

#endif
