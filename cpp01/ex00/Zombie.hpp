#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>
#include<iomanip>

using std::endl;
using std::cin;
using std::cout;
using std::string;

class Zombie
{
private:
    string z_name;
public:
    Zombie(string name);
    ~Zombie();
    void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

Zombie::Zombie(string name) : z_name(name)
{

}

Zombie::~Zombie()
{
    cout << this->z_name << " destroyed\n";
}

#endif