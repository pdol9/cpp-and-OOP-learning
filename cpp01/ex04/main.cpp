/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:05:38 by pdolinar          #+#    #+#             */
/*   Updated: 2022/12/16 21:16:16 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

// not allowed to use std::str.replace()
void	myReplace(std::string& str, const std::string s1, const std::string s2) {

	for (std::size_t pos = 0; (pos = str.find(s1, pos)) != std::string::npos; pos += 1)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
	}
}

int	main(int ac, char **av) {

	if (ac != 4) {
		std::cerr << "Invalid number of arguments." << std::endl;
		return 1;
	}
	std::ifstream infile(av[1]);
	std::ofstream outfile;
	std::string   myline;
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	
	std::string tmp(av[1]);
	tmp.append(".replace");

	if (infile.is_open()) {
		outfile.open(tmp.c_str());
		while (infile.good()) {
			std::getline (infile, myline);
			myReplace(myline, s1, s2);
			outfile << myline << std::endl;
		}
		infile.close();
		outfile.close();
	} else {
		std::cerr << "Couldn't open the file" << std::endl;
	}
	return 0;
}

// initialise both arrays to 0 value
// new int[10]();
// new int[10]{'\0'};	==> gnu

// https://elearning.intra.42.fr/notions/piscine-c-d01-c-basics-2/subnotions/piscine-c-d01-c-basics-2-filestream/videos/filestreams

// find /path/to/project/root -name "*.[ch]" -exec sed -ri 's/original_name/new_name/' {} \;