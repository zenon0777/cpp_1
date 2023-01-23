/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:37:09 by adaifi            #+#    #+#             */
/*   Updated: 2022/12/22 00:37:09 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(const string name, Weapon &weapon) : A_name(name), A_weapon(weapon)
{}

HumanA::~HumanA()
{
}

void HumanA::attacks(void)
{
    cout << A_name << " attacks with their " << A_weapon.getType() << endl;
}