/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 00:32:32 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/24 00:32:33 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include "Colors.hpp"
# include <iostream>
# include <string>

class HumanB
{
	public:
		HumanB(void);
		HumanB(std::string name);
		// HumanB(std::string name, Weapon weapon);
		~HumanB(void);

		void 		attack(void);
		void 		setWeapon(Weapon &weapon);
	private:
		Weapon		*_weapon;
		std::string 	_name;

};

#endif
