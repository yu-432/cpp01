/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 19:11:56 by yooshima          #+#    #+#             */
/*   Updated: 2024/12/31 09:33:29 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	int N = 5;
	Zombie *zombies = zombieHorde(N, "G");
	for (int i = 0; i < N; i++) {
		zombies[i].announce();
	}
	delete [] zombies;
}