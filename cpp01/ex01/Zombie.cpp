/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 05:33:43 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:33:45 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie()
{
    std::cout << z_name << "Constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << z_name << " : Destroyed\n";
}

void Zombie::announce(void)
{
    std::cout << z_name << " : BraiiiiiiinnnzzzZ..."<< std::endl;
}

void Zombie::set_name(std::string name)
{
    z_name = name;
}