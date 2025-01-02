/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:36:20 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/02 13:19:43 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();
		void		setType(std::string type);
		std::string	getType() const;
	private:
		std::string	m_type;
};
