/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 05:32:09 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:32:13 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

Harl::Harl()
{
    std::cout << "constructor called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Destructor called" << std::endl;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put\
enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::none(void)
{
    std::cout << "error" << std::endl;
}

void Harl::complain(std::string level)
{
    int i , l = 0;
    std::string lvl[4] = {"debug", "info", "warning", "error"};
    void(Harl::*fun[5])(void) = {
        &Harl::none,
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    i = (level == "debug") * 1 + (level == "info") * 2 + (level == "warning")*3 + (level == "error")*4;
    l = i;
    switch (l)
    {
		case 1:
			(this->*(fun[1]))();
		case 2:
			(this->*(fun[2]))();
		case 3:
			(this->*(fun[3]))();
		case 4:
			(this->*(fun[4]))();
			break ;
        default:
            (this->*(fun[0]))();
    }
}
