/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 01:40:34 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/25 01:40:35 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "Colors.hpp"
# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include <cstdlib>
# include <unistd.h>

class FragTrap : public ClapTrap
{

	public:
	//constructors
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap const & src);
		FragTrap &operator=(FragTrap const & rhs);

		void 	vaulthunter_dot_exe(std::string const & target);
};

#endif
