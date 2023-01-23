#include"Contact.hpp"

void Contact::contactfilling(string f, string l, string n, string num, string ds)
{
	if (f.empty() || l.empty()|| n.empty() || num.empty() || ds.empty())
		return ;
	this->firstname = f;
	this->lastname = l;
	this->nickname = n;
	this->phonenumber = num;
	this->darkestsecret = ds;
}

void Contact::contact_info()
{
	if (firstname.empty() || lastname.empty()|| nickname.empty() || phonenumber.empty() || darkestsecret.empty())
		return ;
	cout << "firstname: " + firstname << endl;
	cout << "lastname: " + lastname << endl;
	cout << "nickname: " + nickname << endl;
	cout << "phone number: " + phonenumber << endl;
	cout << "darkest secret: " + darkestsecret << endl;
}

void Contact::printcontact(int i)
{
	if (this->firstname.empty() || this->lastname.empty() || this->nickname.empty())
		return ;
	cout << "         " << i << '|';
	truncate(this->firstname);
	truncate(this->lastname);
	truncate(this->nickname);
	cout << '\n';
}

void Contact::truncate(string str)
{
	if (str.length() > 10)
		cout << str.substr(0, 9) + '.';
	else
		cout << std::setw(10) << str;
	cout << '|';
}