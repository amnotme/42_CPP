/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:34:32 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/30 20:34:32 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Convert.hpp"

Convert::Convert(void) :
_input(" "),
_convertInt(0),
_convertFloat(0.0f),
_convertDouble(0.0),
_convertChar(' ')
{
	std::cout << "\033[1;32mDefault Convert constructor called \033[0m"
			  << std::endl;
}
Convert::Convert( std::string input) :
_input( input ),
_convertInt(0),
_convertFloat(0.0f),
_convertDouble(0.0),
_convertChar(' ')
{
	std::cout << "\033[1;32mDefault Convert constructor called \033[0m"
			  << std::endl;
}
Convert::~Convert(void)
{
	std::cout << "\033[1;31mDestructor for Convert called\033[0m" << std::endl;
	return ;
}
Convert::Convert(Convert const & src)
{
	*this = src ;
}
Convert		&Convert::operator=(Convert const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_input = rhs.getInput();
	this->_convertInt = rhs.getInt();
	this->_convertFloat = rhs.getFloat();
	this->_convertDouble = rhs.getDouble();
	this->_convertChar = rhs.getChar();
	return (*this);
}

std::string 	Convert::getInput( void ) const {
	return (this->_input);
}

int				Convert::getInt( void ) const {
	return (this->_convertInt);
}

float			Convert::getFloat( void ) const {
	return (this->_convertFloat);
}

double			Convert::getDouble( void ) const {
	return (this->_convertDouble);
}

char 			Convert::getChar( void ) const {
	return (this->_convertChar);
}

void			Convert::setInput( std::string input ) {
	this->_input = input;
}

void			Convert::setInt( int intVal ) {
	this->_convertInt = intVal;
}

void			Convert::setFloat( float floatVal ) {
	this->_convertFloat = floatVal;
}

void			Convert::setDouble( double doubleVal ) {
	this->_convertDouble = doubleVal;
}

void			Convert::setChar( char charVal ) {
	this->_convertChar = charVal;
}

void			Convert::parseInput( char *argument ) {
	setInput(argument);
	std::cout << "input: " << getInput() << std::endl;
	setInt(argument);
	//setFloat(argument);
}
// nested class Impos
Convert::Impos 	Convert::Impos(void)
{
	return ;
}
Convert::Impos 	Convert::Impos(std::string input)
{
	this->_input = input;
	return ;
}
Convert::Impos		Convert::~Impos(void) throw()
{
	return ;
}
Convert::Impos		Convert::Impos(Impos const & src)
{
	this = &src;
}
Convert::Impos		&Convert::Impos::operator=(Impos const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

// nested class nan
Convert::Nan 	Convert::Nan(void)
{
	return ;
}
Convert::Nan 	Convert::Nan(std::string input)
{
	this->_input = input;
	return ;
}
Convert::Nan		Convert::~Nan(void) throw()
{
	return ;
}
Convert::Nan		Convert::Nan(Impos const & src)
{
	*this = src;
}
Convert::Nan		&Convert::Nan::operator=(Impos const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}
