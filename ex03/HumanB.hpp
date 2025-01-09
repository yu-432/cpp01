/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 14:28:13 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/09 11:53:00 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(std::string name);
  ~HumanB();
  void setWeapon(Weapon weapon);
  void attack();

 private:
  std::string m_name;
  Weapon *m_weapon;
};
