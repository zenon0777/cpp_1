/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 05:33:36 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:33:38 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>

class Zombie
{
private:
    std::string z_name;
public:
    Zombie();
    void set_name(std::string name_set);
    void announce(void);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );


#endif