/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 13:42:47 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/01 16:57:43 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl {
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
		size_t	getArraySize(void);
	private:
		std::string levels[4];
		void	(Harl::*funcs[4])(void);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error( void);
};
