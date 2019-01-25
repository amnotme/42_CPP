/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 10:05:58 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/24 10:06:00 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedNumber(0)
{
	std::cout << BGREEN << "Default constructor called" << RESET << std::endl;
	return ;
}
Fixed::~Fixed(void)
{	std::cout << BRED << "Destructor called" << RESET << std::endl;
	return ;
}
Fixed::Fixed(Fixed const & src)
{
	std::cout << BYELLOW << "Copy constructor called" << RESET << std::endl;
	(*this) = src;
}
Fixed  &Fixed::operator=(Fixed const & rhs)
{
	std::cout << BPURPLE << "Assignation operator called" << RESET << std::endl;
	if (this == &rhs)
		return (*this);
	this->_fixedNumber = rhs.getRawBits();
	return (*this);
}
int 			Fixed::getRawBits(void) const
{
	std::cout << BCYAN << "getRawBits member function called" << RESET << std::endl;
	return(this->_fixedNumber);
}
void 		Fixed::setRawBits(int const raw)
{
	this->_fixedNumber = raw;
}

const uint8_t Fixed::_bits = 8;
