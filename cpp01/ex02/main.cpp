/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 05:33:26 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:33:29 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
	const std::string str = "HI THIS IS BRAIN";
	const std::string *stringPTR = &str;
	const std::string &stringREF = str;
	
	std::cout << "---------std::string content---------\n";
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	std::cout << "---------std::string address---------\n";
	std::cout << &str << std::endl;
	std::cout << (void *)stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	return 0;
}
