/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 03:09:34 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 03:09:35 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <cstdlib>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name, std::string type);
		~Zombie(void);
		Zombie(Zombie const & src);
		Zombie &operator=(Zombie const & rhs);

		void 		setName(std::string const name);
		void 		setType(std::string const type);
		std::string 	getType(void) const;
		std::string	getName(void) const;

		void 		announce(void) const;
	private:
		std::string 	_name;
		std::string 	_type;
};
#endif
