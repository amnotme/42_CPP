/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:52:58 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 22:53:00 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>
class Brain
{
	public:
		Brain(void);
		~Brain(void);
		Brain(Brain const & src);

		std::string 	identify(void);
		std::string 	getThought(void) const;
	private:
		std::string 	_thought;
		std::string	_address;
};
#endif
