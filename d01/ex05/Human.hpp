/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:53:36 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 22:53:37 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>
class Human
{
	public:
		Human(void);
		~Human(void);
		Human(Human const & src);
		Human &operator=(Human const & rhs);
		Brain		getBrain(void) const;
		std::string	identify(void);
	private:
		Brain 		_brain;
};

#endif
