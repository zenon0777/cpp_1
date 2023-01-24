/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MAIN.CPP                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 05:23:29 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:40:09 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	Phonebook	phone;
	std::string		cmd;
	int		i = 0;

	std::cout << "****Welcom to Awesome PhoneBook****\nPlease enter ADD, for adding a new contact.\n";
	std::cout << "To search or get a contact info please type SEARCH\n";
	std::cout << "To exit the program enter EXIT\n";
	while (1)
	{
		if(std::getline(std::cin, cmd))
		{
			if (!cmd.compare("ADD"))
			{
				if (i >= 8)
					i = 0;
				phone.get_infos(i);
					i++;
			}
			else if (!cmd.compare("EXIT"))
				exit(0);
			else if (!cmd.compare("SEARCH"))
				phone.listcontact();
			else
				std::cout << "Command not found\n";
		}
		else
			break;
		std::cout << "PhoneBook > ";
	}
	return 0;
}