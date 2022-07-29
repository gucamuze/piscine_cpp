/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gucamuze <gucamuze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:48:20 by gucamuze          #+#    #+#             */
/*   Updated: 2022/07/26 05:54:34 by gucamuze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// L'intra est down et j'ai pas la suite du day, je me fais chier, donc j'ai
// un peu overengineered ce truc LOL
int main( int ac, char **av )
{
	if (ac != 4) {
		std::cout << "Expected 3 arguments, got " << ac - 1 << " instead." << std::endl;
		return 0;
	}
	
	std::ifstream	inputStream;
	std::ofstream	outputStream;
	std::string		file_contents;
	size_t			find_ret;
	std::string		in_filename		= av[1];
	std::string		out_filename	= in_filename;
	std::string		word_to_change  = av[2];
	std::string		changed_word	= av[3];

	inputStream.open(in_filename.c_str());
	if (inputStream.fail()) {
		std::cout << "Error while opening input file " << in_filename << std::endl;
		return 0;
	}
	out_filename+=".replace";
	outputStream.open(out_filename.c_str());
	if (outputStream.fail()) {
		std::cout << "Error while creating output file " << out_filename << std::endl;
		return 0;
	}
	
	while (getline(inputStream, file_contents)) {
		while ((find_ret = file_contents.find(word_to_change)) != file_contents.npos) {
			if (find_ret > 0)
				outputStream << file_contents.substr(0, find_ret);
			outputStream << changed_word;
			file_contents.erase(0, word_to_change.length() + find_ret);
		}
		outputStream << file_contents << std::endl;
	}
	
	inputStream.close();
	outputStream.close();
}
