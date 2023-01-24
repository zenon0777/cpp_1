/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:36:27 by adaifi            #+#    #+#             */
/*   Updated: 2022/12/22 00:36:27 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void Contact::contactfilling(std::string f, std::string l, std::string n, std::string num, std::string ds)
{
	if (f.empty() || l.empty()|| n.empty() || num.empty() || ds.empty())
		return ;
	this->firstname = f;
	this->lastname = l;
	this->nickname = n;
	this->phonenumber = num;
	this->darkestsecret = ds;
	std::cout << "here\n"; 
}

void Contact::contact_info()
{
	if (firstname.empty() || lastname.empty()|| nickname.empty() || phonenumber.empty() || darkestsecret.empty())
		return ;
	std::cout << "firstname: " + firstname << std::endl;
	std::cout << "lastname: " + lastname << std::endl;
	std::cout << "nickname: " + nickname << std::endl;
	std::cout << "phone number: " + phonenumber << std::endl;
	std::cout << "darkest secret: " + darkestsecret << std::endl;
}

void Contact::printcontact(int i)
{
	if (this->firstname.empty() || this->lastname.empty() || this->nickname.empty())
		return ;
	std::cout << "         " << i << '|';
	truncate(this->firstname);
	truncate(this->lastname);
	truncate(this->nickname);
	std::cout << '\n';
}

void Contact::truncate(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) + '.';
	else
		std::cout << std::setw(10) << str;
	std::cout << '|';
}