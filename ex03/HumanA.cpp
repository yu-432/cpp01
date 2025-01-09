/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:57:24 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/09 11:49:51 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
    : m_name(name), m_weapon(weapon) {};

HumanA::~HumanA() {};

void HumanA::attack() {
  std::cout << m_name << " attacks with their " << m_weapon.getType()
            << std::endl;
}