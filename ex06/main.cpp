/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:14:37 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/10 19:52:28 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Error: Invalid arguments" << std::endl;
    return 1;
  }
  Harl harl;
  harl.complain(argv[1]);
  return 0;
}