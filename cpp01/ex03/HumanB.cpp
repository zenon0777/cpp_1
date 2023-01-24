/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:37:22 by adaifi            #+#    #+#             */
/*   Updated: 2022/12/22 00:37:22 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(const std::string name) : B_name(name), B_weapon(NULL)
{
    std::cout << "contructor called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "Destructor called" << std::endl;
}

void HumanB::attacks(void)
{
    if (B_weapon)
        std::cout << B_name << " attacks with their " << B_weapon->getType() << std::endl;
    else
        std::cout << B_name << " attacks without weapon" << std::endl;
}

void HumanB::set_weapon(Weapon &weapon)
{
    B_weapon = &weapon;
}