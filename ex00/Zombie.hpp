/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:32:30 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/09 11:46:48 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie {
 public:
  Zombie(std::string name);
  ~Zombie();
  void announce();

 private:
  std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
