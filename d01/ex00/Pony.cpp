/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhernand <lhernand@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 23:55:57 by lhernand          #+#    #+#             */
/*   Updated: 2019/01/22 23:55:58 by lhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void) :
_name("Default"),
_color("BLUE"),
_age(0)
{
	std::cout << HBGREEN << "A new Pony has been born" << std::endl;
	std::cout << HGREEN << "Meet '" << _name << "'" << std::endl;
	std::cout << "Favorite Color " << _color << std::endl;
	std::cout << "Barely " << _age << " years old! ^_^" << std::endl;
	std::cout << RESET << std::endl;
	return ;
}
Pony::Pony(std::string const name, std::string const color, int  const age) :
_name(name),
_color(color),
_age(age)
{
	std::cout << HBGREEN << "A new Pony has been born" << std::endl;
	std::cout << HGREEN << "Meet '" << _name << "'" << std::endl;
	std::cout << "Favorite Color " << _color << std::endl;
	if (_age > 1 || _age == 0)
		std::cout << "Barely " << _age << " years old! ^_^";
	else
		std::cout << "Barely " << _age << " year old!";
	std::cout << RESET << std::endl;
	return ;
}
Pony::~Pony(void)
{
	std::cout << HBYELLOW << "What a sad day :(" << std::endl;
	std::cout << HYELLOW << _name << " has died" << std::endl;
	std::cout << "At the tender age of " << _age << std::endl;
	std::cout << _name << " was buried in a " << _color << " coffin";
	std::cout << RESET << std::endl;
	return ;
}
Pony::Pony(Pony const & src)
{
	*(this) = src;
}
Pony  &Pony::operator=(Pony const & rhs)
{
	if (this == &rhs)
		return *(this);
	this->_name = rhs.getName();
	this->_color = rhs.getColor();
	this->_age = rhs.getAge();
	return (*this);
}
std::string	Pony::getName(void) const
{
	return (this->_name);
}
std::string	Pony::getColor(void) const
{
	return (this->_color);
}
int 		Pony::getAge(void) const
{
	return (this->_age);
}

void 		Pony::setName(std::string const name)
{
	this->_name =  name;
}
void 		Pony::setColor(std::string const color)
{
	this->_color = color;
}
void 		Pony::setAge(int const age)
{
	this->_age = age;
}
Pony					*ponyOnTheHeap(void)
{
	int i = 0;
	Pony *p1 = new Pony("Pony on the Heap", "Purple", 10);
	int total = p1->getAge();

	while(++i < 15)
	{
		p1->setAge(total + 1);
		total = p1->getAge();
		usleep(500000);
		std::cout << HPURPLE << "Time flies... " \
		<< total << " years have passed" << std:: endl;
	}
	return (p1);
}
Pony					ponyOnTheStack(void)
{
	Pony p1 = Pony("PonyOnTheStack", "Orange", 1);
	std::cout << HBLUE << "This pony is actually pretty boring and fails to meet";
	std::cout << " your expectations." << RESET << std::endl;
	sleep(5);
	return (p1);
}
