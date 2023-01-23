#include "PhoneBook.hpp"

void Phonebook::listcontact(int len)
{
	int	index = 0;
	int	x;

	cout << "     index" << '|'
		<< " firstname" << '|'
		<< "  lastname" << '|'
		<< "  nickname" << "|\n";
	while (index++ < len && len != 0)
		contact[index].printcontact(index);
	cout << "index: ";
	if (!(cin >> x))
		cout << "invalid index\n";
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	for (index = 0; index <= len; index++)
	{
		if (x <= 0 || x > len)
		{
			if (cin.eof())
				return ;
			cout << "index invalid, Contact doesn't exist : \n";
		}
		if (index == x && x > 0)
			contact[index].contact_info();
	}
}	

void Phonebook::get_infos(int len)
{
	string	str[5];
	// int i;

	// cout << "enter : ";
	// cin >> i;
	// cin.clear();
	// cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "first name :";
	if(std::getline(std::cin, str[0]))
		cout << "lastname : ";
	if(std::getline(std::cin, str[1]))
		cout << "nickname : ";
	if(std::getline(std::cin, str[2]))
		cout << "phonenumber : ";
	if(std::getline(std::cin, str[3]))
		cout << "darkest secret : ";
	if(!std::getline(std::cin, str[4]))
		return ;
	if (len == 8)
		len = 0;
	if (len < 8)
	{
	    len++;
		this->len = len;
	}
	contact[len].contactfilling(str[0], str[1], str[2], str[3], str[4]);
}

Phonebook::Phonebook(const char *f, const char *l, const char *n, const char *num, const char *ds) : Contact(f, l, n, num, ds){}

int main(void)
{
	Phonebook	phone;
	string		cmd;
	int		i = 0;

	cout << "****Welcom to Awesome PhoneBook****\nPlease enter ADD, for adding a new contact.\n";
	cout << "To search or get a contact info please type SEARCH\n";
	cout << "To exit the program enter EXIT\n";
	while (1)
	{
		if(std::getline(std::cin, cmd))
		{
			if (!cmd.compare("ADD"))
			{
				phone.get_infos(i);
				if (i < 8)
					i++;
			}
			else if (!cmd.compare("EXIT"))
				exit(0);
			else if (!cmd.compare("SEARCH"))
				phone.listcontact(i);
			else
				cout << "Command not found\n";
		}
		else
			break;
		cout << "PhoneBook > ";
	}
	return 0;
}

