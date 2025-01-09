/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:33:24 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/09 11:55:40 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Harl {
 public:
  enum levelEnum { DEBUG, INFO, WARNING, ERROR, INVALID };

  Harl();
  ~Harl();
  void complain(std::string level);
  levelEnum getLevel(std::string level);

 private:
  std::string levelStrs[4];
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
  void invalid(void);
};
