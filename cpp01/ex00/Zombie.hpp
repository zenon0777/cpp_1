/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 05:33:55 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:33:55 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>
#include<iomanip>

class Zombie
{
private:
    std::string z_name;
public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif