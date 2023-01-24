/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaifi <adaifi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 05:31:50 by adaifi            #+#    #+#             */
/*   Updated: 2023/01/24 05:31:53 by adaifi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>

std::string&    replace(const char *old, const char *new_world, std::string &tmp)
{
    size_t pos;
    std::string s1 = old;
    std::string s2 = new_world;
    size_t size = s1.length();
    while (tmp.find(s1) != std::string::npos)
    {
        pos = tmp.find(s1);
        tmp.erase(pos, size);
        tmp.insert(pos, s2);
    }
    return tmp;
}

int main(int argc, char const *argv[])
{
    if (argc == 4)
    {
        std::string file_name = argv[1];
        std::fstream infile(file_name);
        file_name.append(".replace");
        std::fstream outfile;
        outfile.open(file_name, std::ios::out);
        while(infile)
        {
            std::string tmp;
            getline(infile, tmp);
            tmp = replace(argv[2], argv[3], tmp);
            outfile << tmp << "\n";
        }
        infile.close();
        outfile.close();
    }
    else
        std::cout << "Bad arguments " << std::endl;
    return 0;
}
