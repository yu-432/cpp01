/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:32:30 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/02 13:18:13 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();
		void		announce();
	private:
		std::string	name;
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);
