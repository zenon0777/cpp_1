#include"Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void Harl::error(void)
{
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::warning(void)
{
    cout << "I think I deserve to have some extra bacon for free. I've been coming for\
    years whereas you started working here since last month." << endl;
}

void Harl::info(void)
{
    cout << "I cannot believe adding extra bacon costs more money. You didn't put\
    enough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;
}

void Harl::complain(std::string level)
{
    int l = 0;
    string lvl[4] = {"debug", "info", "warning", "error"};
    void(Harl::*fun[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for (int i = 0; i < 4; ++i)
    {
        if (lvl[i].compare(level)== 0)
	{
		l = i;
		break;
	}
    }
    switch (l) 
    {
		case 1:
			cout << "hello" << endl;
			break;
		case 2:
			(this->*(fun[2]))();
		case 3:
			(this->*(fun[3]))();
		case 4:
			(this->*(fun[4]))();
			break ;
		default:
			std::cout << "Error: Invalid command. Use HELP for more information." << std::endl;
		break ;
    }
}
