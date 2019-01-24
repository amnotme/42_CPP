/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:53:08 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 22:53:10 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include "Colors.hpp"

Human::Human(void) : _brain(Brain())
{
	return ;
}
Human::~Human(void)
{
	return ;
}
Human::Human(Human const & src)
{
	*(this) = src;
}
Human  		&Human::operator=(Human const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_brain = rhs.getBrain();
	return (*this);
}
Brain 		Human::getBrain(void) const
{
	return (this->_brain);
}
std::string 	Human::identify(void)
{
	return (this->getBrain().identify());
}
