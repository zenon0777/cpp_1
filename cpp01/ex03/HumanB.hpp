/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:37:26 by adaifi            #+#    #+#             */
/*   Updated: 2022/12/22 00:37:26 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include<iostream>
#include"Weapon.hpp"

class HumanB
{
private:
    const std::string B_name;
    Weapon *B_weapon;
public:
    HumanB(const std::string name);
    void set_weapon(Weapon &weapon);
    void attacks(void);
    ~HumanB();
};

#endif