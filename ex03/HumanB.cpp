/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 14:44:55 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/31 15:33:10 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) :
	m_name(name)
{};

HumanB::~HumanB() {
};

void	HumanB::setWeapon(Weapon weapon) {
	m_weapon = &weapon;
};

void	HumanB::attack () {
	if (!m_weapon) {
		std::cout << m_name << " has not Weapon! Can not attak!" << std::endl;
		return ;
	}
	std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
}