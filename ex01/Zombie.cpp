/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:44:45 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/09 11:49:09 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() { std::cout << name << " died!!" << std::endl; }

void Zombie::announce(void) {
  std::cout << name << ": BraiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string setname) { name = setname; }

Zombie *newZombie(std::string name) { return new Zombie(name); }

void randomChump(std::string name) {
  Zombie zombie(name);
  zombie.announce();
}
