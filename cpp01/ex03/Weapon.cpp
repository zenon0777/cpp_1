/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:37:34 by adaifi            #+#    #+#             */
/*   Updated: 2022/12/22 00:37:36 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(const string name) : w_type(name)
{
    
}

Weapon::~Weapon()
{
}

const string Weapon::getType(void)
{
    return w_type;
}

void Weapon::setType(const string name)
{
    w_type = name;
}
