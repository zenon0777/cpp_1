/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:36:37 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:28:33 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(){
	this->len = 0;
}

Phonebook::~Phonebook(){}

void Phonebook::listcontact()
{
	int	index = 0;
	std::string	x;
	int k;

	std::cout << "     index" << '|'
		<< " firstname" << '|'
		<< "  lastname" << '|'
		<< "  nickname" << "|\n";
	while (index < this->len)
	{
		contact[index].printcontact(index + 1);
		index++;
	}
	std::cout << "index: ";
	if (!std::getline(std::cin, x))
		return;
	for(int i= 0; i < (int)x.length(); i++)
		k = std::stoi(x, 0, 10);
	if (k <= 0 || k > this->len)
	{
		if (std::cin.eof())
			return ;
		std::cout << "index invalid, Contact doesn't exist\n";
	}
	for (index = 0; index <= this->len; index++)
	{
		if (index == k && k > 0)
			contact[index - 1].contact_info();
	}
}	

void Phonebook::get_infos(int len)
{
	std::string	str[5];

	std::cout << "first name :";
	if(std::getline(std::cin, str[0]))
		std::cout << "lastname : ";
	if(std::getline(std::cin, str[1]))
		std::cout << "nickname : ";
	if(std::getline(std::cin, str[2]))
		std::cout << "phonenumber : ";
	if(std::getline(std::cin, str[3]))
		std::cout << "darkest secret : ";
	if(!std::getline(std::cin, str[4]))
		return ;
	if (this->len < 8)
		this->len = len + 1;
	contact[len].contactfilling(str[0], str[1], str[2], str[3], str[4]);
	return ;
}

