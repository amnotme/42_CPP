/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 03:09:52 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 03:09:59 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <iostream>
# include <string>
# include <cstdlib>

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		ZombieEvent(ZombieEvent const & src);
		ZombieEvent &operator=(ZombieEvent const & rhs);

		void 		setZombieType(std::string const type);
		std::string 	getZombieType(void) const;
		Zombie 		*newZombie(std::string const name);
		Zombie 		*randomChump(void);
	private:
		std::string 	_type;
};

#endif
