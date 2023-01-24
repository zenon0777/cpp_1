/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:37:34 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:29:55 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(const std::string name) : w_type(name)
{
    std::cout << "constructor called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Destructor called" << std::endl;
}

const std::string Weapon::getType(void)
{
    return w_type;
}

void Weapon::setType(const std::string name)
{
    w_type = name;
}
