/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:53:50 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/02 13:19:18 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void		attack();
	private:
		std::string	m_name;
		Weapon		&m_weapon;
};
