/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:52:48 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/23 22:52:50 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Colors.hpp"
#include <cstdlib>

Brain::Brain(void)
{
	std::srand(std::time(nullptr));
	std::string randThougts[5] = {"hmmmm", "When?", "Why?", "Fudge!!", "^_^"};
	this->_thought = randThougts[rand() % 5];
	std::cout << BYELLOW << "This is what I'm thinking about... " << RESET;
	std::cout << BGREEN << this->_thought << std::endl;
	std::ostringstream buff;
	buff << this;
	this->_address = buff.str();
}
Brain::~Brain(void)
{
	std::cout << BPURPLE << "Such thought is no longer in my brain ^_^" << std::endl;
}
Brain::Brain(Brain const & src)
{
	*(this) = src;
}
std::string	Brain::getThought(void) const
{
	return (this->_thought);
}
std::string 	Brain::identify(void)
{
	return (this->_address);
}
