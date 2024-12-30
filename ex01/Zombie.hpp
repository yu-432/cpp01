/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:32:30 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/30 22:32:57 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce();
		void	setName(std::string name);
	private:
		std::string	name;
};

Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int n, std::string name);
void	randomChump(std::string name);

#endif