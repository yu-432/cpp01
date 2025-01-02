/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:40:34 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/02 13:20:25 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	levelStrs[0] = "DEBUG";
	levelStrs[1] = "INFO";
	levelStrs[2] = "WARNING";
	levelStrs[3] = "ERROR";
}

Harl::~Harl() {
}

void	Harl::complain(std::string level) {
	switch(getLevel(level)) {
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break;
		default:
			invalid();
	}
}

Harl::levelEnum	Harl::getLevel(std::string level) {
	size_t	i;
	for (i = 0; i < 4; i++) {
		if (level == levelStrs[i])
			break ;
	}
	return static_cast<levelEnum>(i);
}

void	Harl::debug() {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void	Harl::info() {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::warning() {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error() {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::invalid() {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}