/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <pbeheyt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:10:55 by pbeheyt           #+#    #+#             */
/*   Updated: 2023/04/26 04:14:30 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string convert(const std::string& line, const std::string& s1,
const std::string& s2) {
    std::string convLine;
    size_t i = 0;
    int len1 = s1.length();

    while (i < line.length()) {
        if (!line.compare(i, len1, s1)) {
            convLine += s2;
            i += len1;
        } else {
            convLine.push_back(line[i]);
            i++;
        }
    }
    return convLine;
}

int	main(int ac, char **av) {
	std::string	line;

	if (ac != 4)
		return (std::cout << "Error\nInvalid number of arguments" << std::endl, -1);
		
	std::string file = av[1];
	std::ifstream ifs(file.c_str());
	if(!ifs)
		return (std::cout << "Error\nCan't open file" << std::endl, -1);
	
	std::string s1 = av[2];
	if (s1.empty())
		return (std::cout << "Error\nEmpty target argument" << std::endl, -1);
	
	std::string s2 = av[3];
	file += ".replace";
	std::ofstream ofs(file.c_str());
	
	while (ifs.good()) {
		getline(ifs, line);
		ofs << convert(line, s1, s2);
		if (ifs.peek() != EOF) {
			ofs << std::endl;
		}
	}
	
	return 0;
}
