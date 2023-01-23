/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:37:13 by adaifi            #+#    #+#             */
/*   Updated: 2022/12/22 00:37:13 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include<iostream>
#include"Weapon.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;

class HumanA
{
private:
    const string A_name;
    Weapon &A_weapon;
public:
    HumanA();
    HumanA(const string name, Weapon &weapon);
    void attacks(void);
    ~HumanA();
};

#endif