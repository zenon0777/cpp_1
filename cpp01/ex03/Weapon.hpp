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



class Weapon
{
private:
    std::string w_type;
public:
    const std::string getType(void);
    void setType(const std::string name);
    Weapon(const std::string name);
    ~Weapon();
};

#endif