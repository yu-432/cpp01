/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:53:50 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/31 15:23:50 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPONA_HPP
#define WEAPONA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack();
	private:
		std::string	m_name;
		Weapon		&m_weapon;
};

#endif
