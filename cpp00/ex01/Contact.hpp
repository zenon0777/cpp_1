#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Contact
{
	private:
		string	firstname;
		string	lastname;
		string	nickname;
		string	phonenumber;
		string	darkestsecret;
	public:
		Contact(){}
		Contact(string f, string l, string n, string num, string ds)
		{
			firstname = f;
			lastname = l;
			nickname = n;
			phonenumber = num;
			darkestsecret = ds;
		}
		void contactfilling(string f, string l, string n, string num, string ds);
		void contact_info();
		void truncate(string str);
		void printcontact(int i);
        ~Contact(){}
};
#endif
