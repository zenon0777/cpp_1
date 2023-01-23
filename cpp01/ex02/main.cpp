#include<iostream>
using std::cout;
using std::string;
using std::endl;

int main()
{
	const string str = "HI THIS IS BRAIN";
	const string *stringPTR = &str;
	const string &stringREF = str;
	
	cout << "---------String content---------\n";
	cout << str << endl;
	cout << *stringPTR << endl;
	cout << stringREF << endl;
	cout << "---------String address---------\n";
	cout << &str << endl;
	cout << (void *)stringPTR << endl;
	cout << &stringREF << endl;
	return 0;
}
