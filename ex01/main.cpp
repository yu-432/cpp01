/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:11:56 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/30 20:47:42 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie *z1;
	Zombie *z4;
	Zombie *z5;
	Zombie z6("six");
	
	z6.announce();
	z1 = newZombie("one");
	randomChump("two");
	randomChump("three");
	z4 = newZombie("four");
	z5 = newZombie("five");
	z1->announce();
	delete z1;
	delete z5;
	delete z4;
}