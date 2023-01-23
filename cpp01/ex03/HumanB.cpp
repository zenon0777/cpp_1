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

HumanB::HumanB(const string name) : B_name(name), B_weapon(NULL)
{}

HumanB::~HumanB()
{
}

void HumanB::attacks(void)
{
    if (B_weapon)
        cout << B_name << " attacks with their " << B_weapon->getType() << endl;
    else
        cout << B_name << " attacks without weapon" << endl;
}

void HumanB::set_weapon(Weapon &weapon)
{
    B_weapon = &weapon;
}