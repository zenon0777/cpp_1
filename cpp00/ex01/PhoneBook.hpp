/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:36:40 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:26:07 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include<string>
#include<ios>
#include<limits>
#include"Contact.hpp"

class Phonebook
{
	private:
		int	len;
		Contact contact[8];
	public:
		Phonebook();
		void get_infos(int len);
		void listcontact();
		~Phonebook();
};

#endif
