/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 05:33:59 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:33:59 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(std::string name) : z_name(name)
{
    std::cout << z_name << " : constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->z_name << " : destroyed\n";
}

void Zombie::announce(void)
{
    std::cout << z_name << " : BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie *newZombie(std::string name)
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
    std::string name;
    Zombie zombie("foo");
    zombie.announce();
    Zombie *newzombie = newZombie("newzombie");
    newzombie->announce();
    delete newzombie;
    std::cout << "Enter a random name for a zombie : ";
    if (std::getline(std::cin, name))
        randomChump(name);
    return 0;
}
