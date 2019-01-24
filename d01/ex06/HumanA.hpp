/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 00:32:51 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/24 00:32:54 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include "Colors.hpp"
# include <iostream>
# include <string>

class HumanA
{
	public:
		HumanA(void);
		// HumanA(std::string name);
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);

		void 		attack(void);
	private:
		Weapon		_weapon;
		std::string 	_name;

};

#endif
