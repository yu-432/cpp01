/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:33:33 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/31 14:41:35 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : m_type(type) {
}

Weapon::~Weapon() {
}

void	Weapon::setType(std::string type) {
	m_type = type;
}

std::string	Weapon::getType() const {
	return m_type;
}