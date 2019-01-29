/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 14:38:50 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/25 14:38:51 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "Colors.hpp"
# include "ClapTrap.hpp"
# include <string>

class ScavTrap : public ClapTrap
{
	public:
	//constructors
	ScavTrap( void );
	ScavTrap( ScavTrap const & copy );
	~ScavTrap( void );
	ScavTrap & operator=( ScavTrap const & other );

	void        challengeNewcomer( std::string const & challenge );
};


#endif
