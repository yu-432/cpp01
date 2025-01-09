/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:43:37 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/09 11:49:24 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string *strPTR = &str;
  std::string &strREF = str;

  std::cout << "ポインタ表示" << std::endl;
  std::cout << &str << std::endl;
  std::cout << strPTR << std::endl;
  std::cout << &strREF << std::endl;

  std::cout << "文字列表示" << std::endl;
  std::cout << str << std::endl;
  std::cout << *strPTR << std::endl;
  std::cout << strREF << std::endl;

  std::cout << "値変更" << std::endl;
  str += " !!!";
  // *strPTR = "HI THIS IS NOT BRAIN";
  // strREF = "HI THIS IS NOT BRAIN";
  std::cout << str << std::endl;
  std::cout << *strPTR << std::endl;
  std::cout << strREF << std::endl;

  std::cout << "参照先変更" << std::endl;
  std::string str2 = "HI THIS IS STOMACH";
  strPTR = &str2;
  // &strREF = str2;
  std::cout << str << std::endl;
  std::cout << *strPTR << std::endl;
  std::cout << strREF << std::endl;
}