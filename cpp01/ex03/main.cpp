/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:37:30 by adaifi            #+#    #+#             */
/*   Updated: 2022/12/22 00:37:30 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"
#include"HumanA.hpp"
#include"HumanB.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attacks();
    club.setType("some other type of club");
    bob.attacks();
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.set_weapon(club);
        jim.attacks();
        club.setType("some other type of club");
        jim.attacks();
    }
    return 0;  
}
