/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 21:34:01 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 21:34:03 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"
# include "ZombieEvent.hpp"
# include <iostream>
# include <string>

class ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);
		ZombieHorde(ZombieHorde const & src);
		ZombieHorde &operator=(ZombieHorde const & rhs);

		void 	announce(void);

	private:
		Zombie	*_horde;
		int 		_N;
};

#endif
