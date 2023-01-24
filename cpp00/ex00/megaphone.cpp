/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 05:34:20 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:35:25 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cctype>

int main(int ac, char **av)
{
	int i = 1;
	if(ac == 1)
		std::cout << "Eroor, you need to add arguments\n";
	while (i < ac){
		int j = 0;
		while(av[i][j])
		{
			std::cout << (char)std::toupper(av[i][j]);
			j++;
		}
		i++;
	}
	std::cout << "\n";
	return 0;
}
