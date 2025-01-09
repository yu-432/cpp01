/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 13:50:54 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/09 11:55:13 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

Harl::Harl() {
  levels[0] = "DEBUG";
  levels[1] = "INFO";
  levels[2] = "WARNING";
  levels[3] = "ERROR";

  funcs[0] = &Harl::debug;
  funcs[1] = &Harl::info;
  funcs[2] = &Harl::warning;
  funcs[3] = &Harl::error;
}

Harl::~Harl() {}

size_t Harl::getArraySize(void) { return sizeof(levels) / sizeof(std::string); }

void Harl::complain(std::string level) {
  for (size_t i = 0; i < getArraySize(); i++) {
    if (level == levels[i]) {
      (this->*funcs[i])();
      return;
    }
  }
  std::cerr << "Error: invalid function" << std::endl;
}

void Harl::debug() {
  std::cout
      << "I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
      << std::endl;
}

void Harl::info() {
  std::cout
      << "I cannot believe adding extra bacon costs more money. You didn't put "
         "enough bacon in my burger! If you did, I wouldn't be asking for more!"
      << std::endl;
}

void Harl::warning() {
  std::cout
      << "I think I deserve to have some extra bacon for free. I've been "
         "coming for years whereas you started working here since last month."
      << std::endl;
}

void Harl::error() {
  std::cout << "This is unacceptable! I want to speak to the manager now."
            << std::endl;
}