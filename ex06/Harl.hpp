/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:33:24 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/02 13:20:41 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>


class Harl {
	public:
		enum levelEnum {
			DEBUG,
			INFO,
			WARNING,
			ERROR,
			INVALID
		};

		Harl();
		~Harl();
		void		complain(std::string level);
		levelEnum	getLevel(std::string level);
	private:
		std::string	levelStrs[4];
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		void		invalid(void);
};
