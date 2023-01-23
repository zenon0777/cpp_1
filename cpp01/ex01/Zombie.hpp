#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>
using std::endl;
using std::string;
using std::cin;
using std::cout;

class Zombie
{
private:
    string z_name;
public:
    Zombie(string name);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

Zombie::Zombie(string name) : z_name(name)
{
}

Zombie::~Zombie()
{
    cout << z_name << " : Destroyed\n";
}


#endif