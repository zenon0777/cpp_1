/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 05:32:20 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:32:22 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"
int main()
{
    Harl comp;
    comp.complain("debug");
    std::cout << "========" << std::endl;
    comp.complain("wning");
    return 0;
}
