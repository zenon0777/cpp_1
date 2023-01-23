#include"Zombie.hpp"

void Zombie::announce(void)
{
    cout << z_name << ":BraiiiiiiinnnzzzZ..."<< endl;
}

Zombie *newZombie(string name)
{
    return new Zombie(name);
}

void randomChump(std::string name)
{
    Zombie rand_zombie(name);
    rand_zombie.announce();
}

int main()
{
    string name;
    Zombie zombie("foo");
    zombie.announce();
    Zombie *newzombie = newZombie("newzombie");
    newzombie->announce();
    delete newzombie;
    cout << "Enter a random name for a zombie : ";
    if (std::getline(cin, name))
        randomChump(name);
    return 0;
}
