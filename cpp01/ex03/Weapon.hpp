/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:37:39 by adaifi            #+#    #+#             */
/*   Updated: 2022/12/22 00:37:39 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Weapon
{
private:
    string w_type;
public:
    const string getType(void);
    void setType(const string name);
    Weapon(const string name);
    ~Weapon();
};

#endif