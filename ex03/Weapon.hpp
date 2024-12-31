/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:36:20 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/31 15:24:22 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();
		void		setType(std::string type);
		std::string	getType() const;
	private:
		std::string m_type;
};

#endif
