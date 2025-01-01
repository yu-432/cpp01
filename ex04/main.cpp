/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 17:35:37 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/01 12:33:43 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceLine(const std::string line, const std::string str1, const std::string str2) {
	std::string result;
	size_t prev = 0;
	size_t pos = 0;

	while ((pos = line.find(str1, pos)) != std::string::npos) {
		result += line.substr(prev, pos - prev);
		result += str2;
		pos += str1.length();
		prev = pos;
	}
	result += line.substr(prev);
	return result;
}

bool processFile(const std::string filename, const std::string str1, const std::string str2) {
	std::ifstream ifs(filename);
	if (!ifs.is_open()) {
		std::cerr << "Error: Can not open input file" << std::endl;
		return false;
	}

	std::string outfileName = filename + ".replace";
	std::ofstream ofs(outfileName);
	if (!ofs.is_open()) {
		std::cerr << "Error: Can not create open file" << std::endl;
		return false;
	}

	std::string line;
	while (std::getline(ifs, line))
		ofs << replaceLine(line, str1, str2) << std::endl;
	ifs.close();
	ofs.close();
	return true;
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Error: Invalid args. \"./replace filename str1 str2\"" << std::endl;
		return 1;
	}

	std::string str1 = argv[2];
	if (!str1.length()) {
		std::cerr << "Error: Argv[2] is empty" << std::endl;
		return 1;
	}

	if (!processFile(argv[1], argv[2], argv[3]))
		return 1;
	return 0;
}